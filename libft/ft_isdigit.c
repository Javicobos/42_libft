/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcobos-d <jcobos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:53:27 by jcobos-d          #+#    #+#             */
/*   Updated: 2021/11/10 15:30:20 by jcobos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c);

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (c);
	return (0);
}

/*
** This function tests if the given character (as an int)
** is a digit from 0 to 9
**
** If the character is a digit, we want to return a nonzero value.
** The chosen nonzero value here is the character itself.
** It could be a 1, but I thought it was cute to make it so that 
** someone calling the function could know what the char was from
** the return value, even if they lost the original c.
** 
** If the character is not a digit or the given int does not
** represent a valid character, we'll return zero. 
*/