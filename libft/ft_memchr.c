/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcobos-d <jcobos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:54:09 by jcobos-d          #+#    #+#             */
/*   Updated: 2021/11/16 13:55:35 by jcobos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n);

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	pos;

	pos = 0;
	while (pos < n)
	{
		if (*(unsigned char *)(s + pos) == (unsigned char)c)
			return ((void *)(s + pos));
		pos++;
	}
	return (0);
}

/*
** This function looks at the memory in pointer s and tries to find
** the character give by c, as an unsigned char. Both the int c and the
** pointer are cast to unsigned char to make sure ints over 255 are 
** turned into a valid unsigned char (t + 256 has to be t)
**
** The function returns the memory address of the first match that it
** found, or a null pointer if it was not found at all in the n bytes.
*/