/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcobos-d <jcobos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:55:21 by jcobos-d          #+#    #+#             */
/*   Updated: 2021/11/11 17:46:15 by jcobos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c);

char	*ft_strrchr(const char *s, int c)
{
	const char	*ocurrence;
	int			pos;

	ocurrence = 0;
	pos = 0;
	while (s[pos])
	{
		if (s[pos] == (char)c)
			ocurrence = s + pos;
		pos++;
	}
	if (!c)
		return ((char *)(s + pos));
	return ((char *)(ocurrence));
}

/*
** This function looks for the last ocurrence of a character in a string,
** including the null which we can search for.
**
** Whenever we find the character in the string, we save its position
** in the ocurrence pointer, which we return at the end. Unlike in strchr
** we have to keep looking after we find the character to make sure it's the
** last ocurrence. Another valid approach would be to get the length of the
** string first, and then transverse it backwards until an ocurrence is 
** found, which would be the one whose address we want to return. 
**
** If the character was not found at all, then ocurrence is the null-pointer
** it was initialized to so we return that. 
*/