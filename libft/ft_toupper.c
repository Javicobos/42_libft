/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcobos-d <jcobos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:55:37 by jcobos-d          #+#    #+#             */
/*   Updated: 2021/11/11 16:03:53 by jcobos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c);

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

/*
** This is a basic function that takes a character and returns it 
** as the same uppercase character, if possible.
**
** If the character isn't a lowercase letter that we can work with,
** we just return the same character. 
**
** The -32 is the difference between lowercase and uppercase characters
** in the ascii table. 
*/