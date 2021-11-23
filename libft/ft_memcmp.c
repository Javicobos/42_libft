/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcobos-d <jcobos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:54:12 by jcobos-d          #+#    #+#             */
/*   Updated: 2021/11/16 14:05:53 by jcobos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n);

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	pos;
	int		retval;

	pos = 0;
	while (pos < n)
	{
		retval = *(unsigned char *)(s1 + pos) - *(unsigned char *)(s2 + pos);
		if (retval)
			return (retval);
		pos++;
	}
	return (0);
}

/*
** This function compares up to n bytes of memory as unsigned char and returns
** a positive if the first one is greater or a negative if the second one is.
** If no differences are found after n comparisons the function returns
** a null pointer. The memory addresses are not protected so don't give
** the function any nulls to work with or you'll get an error. 
*/