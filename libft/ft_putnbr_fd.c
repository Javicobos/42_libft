/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcobos-d <jcobos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:54:34 by jcobos-d          #+#    #+#             */
/*   Updated: 2021/11/18 18:50:50 by jcobos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putnbr_fd(int n, int fd);
static void	ft_abs_fd(int nb, int fd);

void	ft_putnbr_fd(int n, int fd)
{
	if (n / 10 != 0)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_abs_fd(n % 10, fd);
	}
	else
	{
		if (n < 0)
			write(fd, "-", 1);
		ft_abs_fd(n, fd);
	}
}

/*
** This function writes a number to the given file descriptor. 
**
** It will call itself recursively to get to the end of the number
** which is the biggest digit, that we want to write first. If there
** is a negative sign to be written, that one is written even before
** the first digit. As the functions quit recursively, they each write
** the digit they were on, and the first one that was called will write the
** units, the remainder by 10 in that moment. 
**
** An example of how this works
** The first function is called with argument -123 (and the fd)
** 		The second one is given -12
**			The third one is given -1
**			Since -1 fails the first if, it goes in the else.
**			It is negative so a '-' sign is written.
**			A 1 is then written to the file. 
**		We're back in the second function, which writes a 2
** Back to the orginal, which writes a 3 and we're done. -123
*/

static void	ft_abs_fd(int nb, int fd)
{
	char	c;

	if (nb < 0)
		c = -nb + '0';
	else
		c = nb + '0';
	write(fd, &c, 1);
}

/*
** This function writes the absolute value of a digit to the given file
** descriptor. It is only meant to be used for single-digit numbers. 
*/