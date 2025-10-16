/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_del_node.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 16:56:04 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/15 23:38:21 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/stack.h"

void	stack_del_node(t_stack *stack, void (*del)(void *))
{
	if (!stack || !del)
		return ;
	(*del)(&stack->number);
	free(stack);
}
