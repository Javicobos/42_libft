/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcobos-d <jcobos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:54:03 by jcobos-d          #+#    #+#             */
/*   Updated: 2021/11/11 18:48:49 by jcobos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content);

t_list	*ft_lstnew(void *content)
{
	t_list	*goal;

	goal = malloc(sizeof(t_list));
	if (!goal)
		return (0);
	goal->content = content;
	goal->next = 0;
	return (goal);
}

/*
** This functions allocates memory for a new element of the linked list t_list
** and returns it, with its variable content set to the input void* content. 
**
** The variable next is initialized to zero, as a null pointer, because a new
** element of a linked list does not yet point to anything.
*/