/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcobos-d <jcobos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:55:00 by jcobos-d          #+#    #+#             */
/*   Updated: 2021/11/11 17:51:40 by jcobos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size);

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	bytes_to_copy;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (dest_len + 1 > size)
		return (size + src_len);
	if (src_len >= size - dest_len - 1)
		bytes_to_copy = size - dest_len - 1;
	else
		bytes_to_copy = src_len;
	ft_memcpy((void *)(dest + dest_len), (void *)src, bytes_to_copy);
	dest[dest_len + bytes_to_copy] = '\0';
	return (dest_len + src_len);
}

/*
** This function concatenates strings. It has some special conditions that
** have to be checked before concatenating. Because the functino wants to 
** append size bytes, it wants to append size-1 characters and a null.
** My original implementation used loops and checked some conditions
** constantly so I decided to change it to using ft_memcpy and just
** calculating what we want to copy beforehand. 
**
** The first "if" checks if we have something to do at all. If size is already
** smaller or the same as the bytes in dest, we don't want to do anything
** so we consider dest's size to be size and return that. 
**
** If size is big enough then we wil calculate the number of bytes we
** want to copy, which will be the smallest of the length of the source
** and size minus (dest + 1). Then we copy and we also add a null. 
**
** Below is my previous implementation of the function so it can be compared
** if it is easier for someone to understand, though I think the new version
** is more straightforward and easier to read. 
** 		size_t	pos;
** 		dest_len = 0;
** 		pos = 0;
** 		while (dest_len < size && dest[dest_len])
** 			dest_len++;
** 		while (src[pos] && pos + dest_len + 1 < size)
** 		{
** 			dest[dest_len + pos] = src[pos];
** 			pos++;
** 		}
** 		if (dest_len < size)
** 			dest[dest_len + pos] = '\0';
** 		return (dest_len + ft_strlen(src));
*/
