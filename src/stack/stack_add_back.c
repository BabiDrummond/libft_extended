/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_add_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 16:12:58 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/13 22:18:16 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/stack.h"

void	stack_add_back(t_stack **top, t_stack *new)
{
	if (!*top && !new)
		return ;
	if (!*top)
	{
		*top = new;
		return ;
	}
	stack_last(*top)->next = new;
}
