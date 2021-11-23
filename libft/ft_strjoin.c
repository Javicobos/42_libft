/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcobos-d <jcobos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:54:57 by jcobos-d          #+#    #+#             */
/*   Updated: 2021/11/17 16:27:43 by jcobos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2);

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*goal;
	int		len_1;
	int		len_2;
	int		len_goal;

	if (!s1 || !s2)
		return (0);
	len_1 = ft_strlen((char *)s1);
	len_2 = ft_strlen((char *)s2);
	len_goal = len_1 + len_2;
	goal = malloc(len_goal + 1);
	if (!goal)
		return (0);
	ft_memcpy(goal, s1, len_1);
	ft_memcpy(goal + len_1, s2, len_2);
	goal[len_goal] = '\0';
	return (goal);
}

/*
** This function allocates memory for a string that is the result of 
** joining two other strings together, and then create that string.
**
** It will check that both exist (are not nullpointers) and get their
** lengths to calculate the total length needed. +1 for the nullterm.
**
** The contents of the strings are then copied with ft_memcpy and then
** a null-terminating byte is added to goal, which is returned.
*/