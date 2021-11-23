/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcobos-d <jcobos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:53:03 by jcobos-d          #+#    #+#             */
/*   Updated: 2021/11/16 18:18:39 by jcobos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size);

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	totalsize;
	void	*goal;

	totalsize = nmemb * size;
	goal = malloc(totalsize);
	if (!goal)
		return (0);
	ft_bzero(goal, totalsize);
	return (goal);
}

/*
** This function allocates some memory with malloc and then sets its bytes
** to zero using ft_bzero. 
**
** It needs enough space for nmeb objects of size size, so we multiply to
** get the desired size of the malloc. 
*/