/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcobos-d <jcobos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:53:48 by jcobos-d          #+#    #+#             */
/*   Updated: 2021/11/11 18:42:24 by jcobos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *));

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*to_del;

	while (*lst)
	{
		to_del = *lst;
		*lst = (*lst)->next;
		ft_lstdelone(to_del, del);
	}
}

/*
** This function deletes and frees all elements of a linked list from
** the given one to the end of the list. It uses the function given
** as a parameter to delete the contents of the elements like ft_lstdelone.
**
** lst is iterated and for each element, after we've used it to get the next
** one we delete and free it, both using ft_lstdelone.
*/