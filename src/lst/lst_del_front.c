/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_del_front.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 02:12:40 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/02 17:49:14 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	lst_del_front(t_list **head, void (*del)(void *))
{
	t_list	*temp;

	if (!head || !*head)
		return ;
	temp = *head;
	*head = (*head)->next;
	lst_del_node(temp, (*del));
}
