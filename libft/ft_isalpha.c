/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcobos-d <jcobos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:53:21 by jcobos-d          #+#    #+#             */
/*   Updated: 2021/11/10 15:57:56 by jcobos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c);

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (c);
	return (0);
}

/*
** This function tests if the given character (as an int)
** is a letter, uppercase or lowercase.
**
** If the character is a letter, we want to return a nonzero value.
** The chosen nonzero value here is the character itself.
** It could be a 1, but I thought it was cute to make it so that 
** someone calling the function could know what the char was from
** the return value, even if they lost the original c.
** 
** If the character is not a letter or the given int does not
** represent a valid character, we'll return zero. 
**
** Note that we don't need an "else" after the "if", because there
** is a return inside meaning we never keep reading code if we do
** go inside of the if. 
*/