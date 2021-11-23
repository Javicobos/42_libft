/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcobos-d <jcobos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:54:51 by jcobos-d          #+#    #+#             */
/*   Updated: 2021/11/16 18:22:45 by jcobos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src);

char	*ft_strdup(const char *src)
{
	int		len;
	char	*goal;

	len = ft_strlen(src);
	goal = malloc(len + 1);
	if (!goal)
		return (0);
	ft_memcpy(goal, src, len + 1);
	return (goal);
}

/*
** This function duplicates a given string. It will get its length and then
** alloce and copy that many bytes plus one (for the null-terminating byte)
** with ft_memcpy. The created string is then returned. 
*/