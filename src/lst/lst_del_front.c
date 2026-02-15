/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_del_front.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 02:12:40 by bmoreira          #+#    #+#             */
/*   Updated: 2026/02/14 21:19:36 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lst.h"

void	lst_del_front(t_list **head, void (*del)(void *))
{
	t_list	*temp;

	if (!head || !*head)
		return ;
	temp = *head;
	*head = temp->next;
	if (*head)
		(*head)->prev = NULL;
	lst_del_node(temp, (*del));
}
