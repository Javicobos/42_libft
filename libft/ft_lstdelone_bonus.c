/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcobos-d <jcobos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:53:51 by jcobos-d          #+#    #+#             */
/*   Updated: 2021/11/18 15:53:18 by jcobos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *));

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst)
	{
		if (del && lst->content)
			del(lst->content);
		free(lst);
	}
}

/*
** This function deletes an element using a function given as pointer to
** delete the element's content, then frees the element itself.
**
** First we check that lst exists to make sure we don't do anything weird.
** If it does, and it has a content and del also exists, we pass it. 
** Finally we free the memory of lst.
**
** Note that nothing is done to lst's next pointer.
*/