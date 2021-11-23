/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcobos-d <jcobos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:54:39 by jcobos-d          #+#    #+#             */
/*   Updated: 2021/11/17 18:37:39 by jcobos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd);

void	ft_putstr_fd(char *s, int fd)
{
	int	pos;

	if (!s)
		return ;
	pos = 0;
	while (s[pos])
	{
		write(fd, s + pos, 1);
		pos++;
	}
}

/*
** This function writes the given string in the file given by the fle
** descriptor fd. It loops the string while doing essentially the same
** as ft_putchar_fd. It also has a check to make sure the string exists.
*/