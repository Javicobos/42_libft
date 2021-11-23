/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcobos-d <jcobos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:55:27 by jcobos-d          #+#    #+#             */
/*   Updated: 2021/11/17 17:06:47 by jcobos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	s_len;
	unsigned int	my_len;
	char			*goal;

	if (!s)
		return (0);
	s_len = ft_strlen((char *)s);
	my_len = 0;
	if (start < s_len)
		my_len = s_len - start;
	if (my_len > len)
		my_len = len;
	goal = malloc(my_len + 1);
	if (!goal)
		return (0);
	ft_memcpy(goal, s + start, my_len);
	goal[my_len] = '\0';
	return (goal);
}

/*
** This function creates a substring from the start position of the given
** string, using up to len characters. Note that this means the actual size
** will need a +1 for the null. 
**
** If s exists (it's not a null pointer), we caculate its length. We then
** compare that to the index we're told to start at. If the index is beyond
** the end of the string, my_len will stay at zero and the substr will be 
** an empty string. If the start is actually inside of the string, we set
** the remaining chars until the end of it as my_len. 
**
** If this my_len is bigger than the original given len, we trim it so that
** it just becomes len. We basically want to use the minimum of those two 
** amounts so that we never copy more than len characters and we also 
** don't copy anything beyond the null in the string. 
**
** Once we have this len of characters we want, we allocate it (+1 for null)
** and just use ft_memcpy to our goal from the start position in s and 
** using the my_len we have calculated. We then nullterm the string goal.
*/