/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcobos-d <jcobos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:54:47 by jcobos-d          #+#    #+#             */
/*   Updated: 2021/11/11 16:11:05 by jcobos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c);

char	*ft_strchr(const char *s, int c)
{
	int	pos;

	pos = 0;
	while (s[pos])
	{
		if (s[pos] == (char)c)
			return ((char *)(s + pos));
		pos++;
	}
	if (!c)
		return ((char *)(s + pos));
	return (0);
}

/*
** This function looks for the first ocurrence of a character in a string,
** including the null which we can search for.
**
** The loop travels through the string and checks if any character matches
** our c (as a char). If it does, we return a pointer to its address. 
**
** Finally we return the position of the null-character if c was null, or we
** return a null-pointer if we did not find the character at all. 
*/