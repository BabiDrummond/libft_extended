/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_clear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 17:19:04 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/15 23:37:29 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/stack.h"

void	stack_clear(t_stack **top, void (*del)(void *))
{
	t_stack	*next;

	if (!top || !del || !*top)
		return ;
	while (*top)
	{
		next = (*top)->next;
		stack_del_node(*top, (*del));
		*top = next;
	}
	*top = NULL;
}
