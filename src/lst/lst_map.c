/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helios <helios@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 17:53:12 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/17 01:49:39 by helios           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/lst.h"

t_list	*lst_map(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*node;

	if (!lst || !f)
		return (NULL);
	head = NULL;
	while (lst)
	{
		node = lst_new((*f)(lst->content));
		if (!node)
		{
			lst_clear(&head, (*del));
			return (NULL);
		}
		lst_add_back(&head, node);
		lst = lst->next;
	}
	return (head);
}
