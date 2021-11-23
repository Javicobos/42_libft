/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcobos-d <jcobos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:53:24 by jcobos-d          #+#    #+#             */
/*   Updated: 2021/11/10 15:30:37 by jcobos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c);

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (c + 1);
	return (0);
}

/*
** This function tests if the given character (as an int)
** is in the standard ascii table, meaning it's between 0 and 127.
**
** If the character is an ascii character, we want to return a nonzero value.
** The chosen nonzero value here is the character plus one
** It could be a 1, but I thought it was cute to make it so that 
** someone calling the function would be able to retreieve the original
** character from the return value of this function even if they lost
** the original char c. 
** There is a +1 so that we don't return zero when the character is
** exactly the \0 ascii character, for which we do want to return nonzero.
**
** If the character is not an ascii character or not a valid character
** we will return zero. 
*/