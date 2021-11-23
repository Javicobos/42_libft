/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcobos-d <jcobos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:53:42 by jcobos-d          #+#    #+#             */
/*   Updated: 2021/11/12 19:33:25 by jcobos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new);

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (*lst)
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
	else
		*lst = new;
}

/*
** This function adds a new element to the back of a linked list
**
** To do that, if the list has some valid elements, it'll go to the
** last one and change its pointer so it points to the new element.
**
** If the list had no elements (was a nullpointer) then we simply
** make it point to the new element given. 
**
** The first "if" can also be ft_lstlast(*lst)->next = new; 
** and I think that's very cool but kept this impementation
** because it is a bit easier to read for me. 
*/