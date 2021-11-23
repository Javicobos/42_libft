/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcobos-d <jcobos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:54:19 by jcobos-d          #+#    #+#             */
/*   Updated: 2021/11/10 20:15:45 by jcobos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned long int	pos;

	if ((!dest && !src) || !n)
		return (dest);
	if (dest <= src)
	{
		pos = 0;
		while (pos < n)
		{
			*(unsigned char *)(dest + pos) = *(unsigned char *)(src + pos);
			pos++;
		}
	}
	else
	{
		pos = n - 1;
		while (pos > 0)
		{
			*(unsigned char *)(dest + pos) = *(unsigned char *)(src + pos);
			pos--;
		}
		if (!pos)
			*(unsigned char *)(dest) = *(unsigned char *)(src);
	}
	return (dest);
}

/*
** This function copies n bytes from src to dest, both being memory addresses.
** It has to work as if we copied the bytes from src to an array first,
** and then to the final destination dest. 
**
** Because we can have overlapping spaces in the memory, we have to be careful
** and copy things in the correct order. 
**
** The first check will make us quit if we see that both addresses are null or
** the number of bytes to copy is zero. 
**
** If dest is smaller than src, that means it goes second  in the memory so
** we can copy from the beginning of dest, and when the overlap happens and that
** beginning is overwritten we'll be ahead in dest. 
**
** If it happens the other way and dest comes first, we start from its end
** because it would be overwritten first. For that we start pos at n-1
** and stop when it gets to zero. We can't pos-- and then check in the loop
** because it's unsigned and 0-- underflows into a massive number.
** The if at the end handles that, when pos is zero. Ideally it'd be a single
** loop but I thought this was better than checking in the loop and using
** break, because we'd be checking if pos is zero every single loop.
**
** Finally we return the destination address.
*/