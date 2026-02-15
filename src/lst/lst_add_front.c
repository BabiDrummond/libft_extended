/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_add_front.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 14:50:57 by bmoreira          #+#    #+#             */
/*   Updated: 2026/02/14 21:17:37 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lst.h"

void	lst_add_front(t_list **head, t_list *new)
{
	if (!head || !new)
		return ;
	new->next = *head;
	if (*head)
		(*head)->prev = new;
	*head = new;
}
