/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcobos-d <jcobos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:55:17 by jcobos-d          #+#    #+#             */
/*   Updated: 2021/11/16 16:40:56 by jcobos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t len);

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t	pos;
	size_t	len_big;
	size_t	len_little;

	len_big = ft_strlen(big);
	len_little = ft_strlen(little);
	pos = 0;
	while (pos + len_little <= len && pos + len_little <= len_big)
	{
		if (!(ft_memcmp(big + pos, little, len_little)))
			return ((char *)(big + pos));
		pos++;
	}
	return (0);
}

/*
** This function looks for the string little in the string big, but it will
** search at most len characters from big. This implementation compares them
** using ft_memcmp and the length of the little string, so we first check
** that there are enough bytes to check.
**
** The main loop moves in big and calls the function to check, stopping
** whenever it gets a zero as a result that means the string little was found.
** If we have few unseen characters in big, so that the string little
** no longer fits, we also quit the loop.
**
** My previous implementation is as follows, it's way uglier but it worked:
**	if (!little[0]);
**		return ((char *)big);
**	while (big[pos + found] && pos + found <= len)
**	{
**		
**		if (little[found] == 0)
**			return ((char *)(big + pos));
**		if (big[pos + found] == little[found])
**			found++;
**		else
**		{
**			found = 0;
**			pos++;
**		}
**	}
**	if (!big[pos + found] && !little[found] && pos + found <= len)
**		return ((char *)(big + pos));
**
** It also had return (0) at the end and the int found defined. 
*/