/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcobos-d <jcobos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:55:23 by jcobos-d          #+#    #+#             */
/*   Updated: 2021/11/17 16:59:36 by jcobos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*goal;
	int		len;
	int		pos;
	int		pos2;

	pos = 0;
	if (!s1)
		return (0);
	pos2 = ft_strlen((char *)s1) - 1;
	while (s1[pos] && ft_strchr(set, s1[pos]))
		pos++;
	while (pos2 > pos && ft_strchr(set, s1[pos2]))
		pos2--;
	len = pos2 + 1 - pos;
	goal = ft_substr(s1, (unsigned int)pos, (size_t)len);
	return (goal);
}

/*
** This function allocates and creates a string resulting from trimming the 
** separators in set from the beginning and end of the original string s1.
**
** First, we check that s1 is non-null and then get its length, which we will
** use then assign to pos2 (we have a -1 there to go to the last actual)
** character of the string, not the null. If the string is empty we'd go to 
** -1 but that is okay as we will see later, it's an int. 
**
** pos is then used to transverse the string until a non-separator is found.
** If the string just has separators, pos will be where the null is.
**
** pos2 will then decrease from that last character to the first non-separator
** until it reaches pos. In case of an empty string they'd be 0 and -1. 
**
** We then calculate the length of the string we want to create, by
** subtracting pos2 + 1 minus pos. To know why we have the +1 we can look at a
** quick example: a string like ---abc--- with '-' as the separator wants us
** to create "abc", wich has a length of three. 
**
** In that string pos will get to 3, which is the "a". pos2 would start at 8
** and move until it meets the "c" at position 5. If we just did 5-3 that
** would be 2, too small for "abc", so we want to add 1 to make it work.
**
** We then create a substring from the original with pos as the start and len
** as our length. For empty strings len is -1+1-0 = 0 so we make an empty str.
*/