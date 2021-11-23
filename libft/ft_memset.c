/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcobos-d <jcobos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:54:26 by jcobos-d          #+#    #+#             */
/*   Updated: 2021/11/10 19:37:08 by jcobos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n);

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned long int	pos;

	pos = 0;
	while (pos < n)
	{
		*(unsigned char *)(s + pos) = (unsigned char)c;
		pos++;
	}
	return (s);
}

/*
** This function fils a zone of the memory with some value given. 
** It will go through n bytes and write the int c in all of them-
** This int c is treated and written as an unsigned char.
** The "void *" taken as the first parameter is a memory address.
** We treat it as "void *" because it can contain anything
**
** This address is also what we will return after we've set n bytes to c. 
**
** pos could be a size_t but we see that it's okay to compare it to
** an unsigned long int. 
**
** When we look at s + pos, we have to treat it as a pointer to an 
** unsigned char, this cast is "done at the pointer level" so that's
** why we see the *(unsigned char *)(s + pos). 
*/