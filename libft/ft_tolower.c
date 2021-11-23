/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcobos-d <jcobos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:55:30 by jcobos-d          #+#    #+#             */
/*   Updated: 2021/11/11 16:04:51 by jcobos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c);

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

/*
** This is a basic function that takes a character and returns it 
** as the same lowercase character, if possible.
**
** If the character isn't an upeprcase letter that we can work with,
** we just return the same character. 
**
** The +32 is the difference between uppercase and lowercase characters
** in the ascii table. 
*/