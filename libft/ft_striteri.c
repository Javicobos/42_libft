/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcobos-d <jcobos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:54:53 by jcobos-d          #+#    #+#             */
/*   Updated: 2021/11/17 16:32:06 by jcobos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char*));

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	pos;

	if (!s || !f)
		return ;
	pos = 0;
	while (s[pos])
	{
		f(pos, s + pos);
		pos++;
	}
}

/*
** This function takes a string and transverses it, applying a function to
** its characters. The function takes the index of the character (its position)
** and a pointer to the character itself, but doesn't return anything.
**
** We first check that both the string and the function-pointer exist, and
** then transverse the string applying the function to each character until
** a null is found. Nothing is done for an empty string.
**
** Note that even though ft_striteri is a void function that does not
** return anything, we can use the keyword return to stop it and get out.
*/