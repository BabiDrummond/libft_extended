/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_size.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:56:25 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/13 22:18:55 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/stack.h"

int	stack_size(t_stack *stack)
{
	int	len;

	len = 0;
	while (stack && ++len)
		stack = stack->next;
	return (len);
}
