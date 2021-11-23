/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcobos-d <jcobos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:54:06 by jcobos-d          #+#    #+#             */
/*   Updated: 2021/11/11 18:48:46 by jcobos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst);

int	ft_lstsize(t_list *lst)
{
	int	pos;

	pos = 0;
	while (lst)
	{
		lst = lst->next;
		pos++;
	}
	return (pos);
}

/*
** This function counts the number of elements in a given linked list. 
**
** We iterate the list by replacing lst with the address of the next element.
** We know that the last element in a linked list points to zero so
** the loop will end when lst is zero, and we won't try to access 0's next.
**
** A maliciously looping linked list would keep this function running forever
** so be careful with loops!
**
** Finally we return the number of valid elements in the list, which is how
** many times we entered the while loop. 
*/