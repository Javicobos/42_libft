/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcobos-d <jcobos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:55:07 by jcobos-d          #+#    #+#             */
/*   Updated: 2021/11/10 15:51:48 by jcobos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str);

size_t	ft_strlen(const char *str)
{
	size_t	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

/*
** This function uses the size_t data type, which is basically
** an unsigned long int used for counting sizes of data. 
**
** It will transverse a null-terminated string until it finds that
** str[count] is the '\0' or null-character. 
**
** It will count all characters in a string except for the null.
** So a string like "abc" will return 3 even if it takes 4 spaces 
** in the memory because it's actually "abc\0".
**
** This function is not protected, meaning that we'd have problems
** if we give it a nullpointer or something that makes accessing
** str[count] inaccessible. Be nice to it!
*/