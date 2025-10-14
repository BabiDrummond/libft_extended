/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_clear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 17:19:04 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/13 22:18:22 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/stack.h"

void	stack_clear(t_stack **top, void (*del)(int))
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
