/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcobos-d <jcobos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:53:18 by jcobos-d          #+#    #+#             */
/*   Updated: 2021/11/10 15:30:31 by jcobos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c);

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (c);
	return (0);
}

/*
** This function tests if the given character (as an int)
** is a letter (ft_isalpha) or a number (ft_isdigit).
**
** If the character is alphanumerical, we want to return a nonzero value.
** The chosen nonzero value here is the character itself.
** It could be a 1, but I thought it was cute to make it so that 
** someone calling the function could know what the char was from
** the return value, even if they lost the original c.
** 
** If the character is not alphanumerical or the given int does not
** represent a valid character, we'll return zero. 
**
*/