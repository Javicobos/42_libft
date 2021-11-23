/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcobos-d <jcobos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:55:02 by jcobos-d          #+#    #+#             */
/*   Updated: 2021/11/11 14:57:28 by jcobos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size);

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	len_src_return;
	size_t	bytes_to_copy;

	len_src_return = ft_strlen(src);
	if (size > 0)
	{
		if (len_src_return >= size - 1)
			bytes_to_copy = size - 1;
		else
			bytes_to_copy = len_src_return;
		ft_memcpy((void *)dest, (void *)src, bytes_to_copy);
		dest[bytes_to_copy] = '\0';
	}
	return (len_src_return);
}

/*
** This function copies a string of up to size - 1 real characters
** The string will be null terminated for a total number of size characters
** The exception is that if size is zero, we don't null-terminate the string
**
** The function returns the length of the string it tried to create
** This means we return the length of the source string
** If this return value was greater than or equal to the given size
** a truncation has happened. 
**
** Note that we only do size - 1 if size is greater than zero, so we do not
** have an underflow problem.
**
** This function was originally way longer but I shortened it using ft_strlen
** and ft_memcpy, because ccharacters are 1 byte long and memcpy uses them so
** we effectively copy weird strings when we do memcpy.
*/