/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcobos-d <jcobos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:55:12 by jcobos-d          #+#    #+#             */
/*   Updated: 2021/11/17 17:06:35 by jcobos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	pos;
	unsigned int	len;
	char			*goal;

	if (!f || !s)
		return (0);
	len = ft_strlen(s);
	goal = malloc(len + 1);
	if (!goal)
		return (0);
	pos = 0;
	while (s[pos])
	{
		goal[pos] = f(pos, (char)s[pos]);
		pos++;
	}
	goal[pos] = '\0';
	return (goal);
}

/*
** This function takes a string and a function and uses them both to make
** a new string. The function f takes the position of a character and the 
** character itself and will return a character that we want to use for the
** new string. 
**
** ft_strmapi first checks that the function f and string s exist, then gets
** the length of s and uses it to allocate memory for the new string, with
** the classic +1 for the null-terminating byte. 
**
** It will then traven through s and write in the allocated space of goal,
** until the string s is over. It will then nullterminate goal and return it.
*/