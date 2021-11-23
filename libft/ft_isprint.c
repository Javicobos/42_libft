/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcobos-d <jcobos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:53:33 by jcobos-d          #+#    #+#             */
/*   Updated: 2021/11/10 15:32:36 by jcobos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c);

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (c);
	return (0);
}

/*
** This function tests if the given character (as an int)
** is a printable character.
**
** If it is, we want to return a nonzero value, the char itself,
**
** If it's not printable or not a valid char, we'll return zero.
*/