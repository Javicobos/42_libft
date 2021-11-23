/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcobos-d <jcobos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:54:00 by jcobos-d          #+#    #+#             */
/*   Updated: 2021/11/18 15:53:34 by jcobos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*goal;
	t_list	*current;

	goal = 0;
	while (lst)
	{
		current = ft_lstnew(f(lst->content));
		if (!current)
		{
			ft_lstclear(&goal, del);
			return (0);
		}
		ft_lstadd_back(&goal, current);
		lst = lst->next;
	}
	return (goal);
}

/*
** This function creates a new list that results of applying the passed
** function to al elements of the passed list. 
**
** New elements are created and added to the back of the existing list
** using the ft_lstnew and ft_lstadd_back functions. 
**
** If a problem arises and an element fails to be created, we delete
** the whole list and free all of its elements. 
**
** Finally we return goal, which will point to null if a problem happened
** or to the first element of the new list if everything went okay. 
*/