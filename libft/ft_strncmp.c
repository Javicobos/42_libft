/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcobos-d <jcobos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:55:15 by jcobos-d          #+#    #+#             */
/*   Updated: 2021/11/16 13:48:44 by jcobos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n);

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int		return_value;
	size_t	pos;

	return_value = 0;
	pos = 0;
	while ((s1[pos] || s2[pos]) && pos < n)
	{
		return_value = (unsigned char)s1[pos] - (unsigned char)s2[pos];
		if (return_value != 0)
			return (return_value);
		pos++;
	}
	return (return_value);
}

/*
** This function compares up to n bytes of two strings. It works like a
** dictionary, looking at each letter until there is a difference.
**
** We return a positive value if s1 was bigger in ascii, or a negative
** if s2 was smaller. The chars are casted to unsigned so that they really
** go from 0 to 255 instead of the 128-255 being negatives when they should
** be larger than the 0-127 chars. 
**
** If two characters are the same, the difference is zero and we keeep
** comparing until we find a difference or look at n bytes. 
*/