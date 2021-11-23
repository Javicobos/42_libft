/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcobos-d <jcobos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:54:15 by jcobos-d          #+#    #+#             */
/*   Updated: 2021/11/10 20:02:41 by jcobos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned long int	pos;

	pos = 0;
	if (!dest && !src)
		return (dest);
	while (pos < n)
	{
		*(unsigned char *)(dest + pos) = *(unsigned char *)(src + pos);
		pos++;
	}
	return (dest);
}

/*
** This function copies the memory we have in the address src to
** the address dest. The bytes are read and written as unsigned chars.
** It will copy n bytes, as you'd expect. 
**
** dest and src should not overlap, or we get undefined behavior.
**
** The initial "if" checks that if both parameter addresses are null, we do
** nothing and return zero (one of them). According to one of the tester
** programs (libft unit tests), the function should segv if one of the
** pointers is null but not when both are null and size is greater than zero.
** This is why we have "&&" there instead of "||".
** 
** There seems to be some debate online
** about how this should behave with arguments like (0,0,0) and different
** compilers may handle it differently, because the general idea is that the 
** behavior is undefined if "dest" or "src" are null, but it's also true that 
** the function has nothing to do for an "n" of zero. 
*/