/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcobos-d <jcobos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:54:29 by jcobos-d          #+#    #+#             */
/*   Updated: 2021/11/18 15:54:55 by jcobos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd);

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*
** This function writes a single character in the file whose file descriptor
** is given by fd. To do that, we just give the function write this file
** descriptor and the addresss of the char c that we want to write. The final
** number is a 1 because we just want to write 1 byte from c's address.
*/