/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_del_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 02:12:40 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/15 23:37:37 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/stack.h"

void	stack_del_front(t_stack **top, void (*del)(void *))
{
	t_stack	*temp;

	if (!top || !*top)
		return ;
	temp = *top;
	*top = (*top)->next;
	stack_del_node(temp, (*del));
}
