/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcobos-d <jcobos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:53:45 by jcobos-d          #+#    #+#             */
/*   Updated: 2021/11/11 18:35:55 by jcobos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new);

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

/*
** This function adds a new element to the beginning of a linked list.
** 
** We look at *lst to modify the pointer of where the list begins
** Something like lst = &new would NOT work because we change lst
** locally, remember variables in C are copied and passed as values
** when you send them to another function!
**
** The function isn't protected so new has to be a valid t_list pointer.
**
** It's okay if lst holds a null pointer, we'd just replace it with new's
** memory address in the final step.
*/