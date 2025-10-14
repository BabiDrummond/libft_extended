/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_del_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 19:20:57 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/13 22:18:26 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/stack.h"

void	stack_del_back(t_stack **top, void (*del)(int))
{
	t_stack	*temp;

	if (!top || !*top)
		return ;
	temp = *top;
	while (temp->next->next)
		temp = temp->next;
	stack_del_node(temp->next, (*del));
	temp->next = NULL;
}
