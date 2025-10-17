/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helios <helios@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 22:19:08 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/17 01:56:43 by helios           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

# include <unistd.h>
# include "ft_types.h"
# include "printf.h"

void	stack_bubble_sort(t_stack *top);
void	stack_add_back(t_stack **top, t_stack *new);
void	stack_add_front(t_stack **top, t_stack *new);
void	stack_clear(t_stack **top);
void	stack_del_back(t_stack **top);
void	stack_del_front(t_stack **top);
void	stack_iter(t_stack *stack, void (*f)(int));
void	stack_print(t_stack *top);
t_stack	*stack_last(t_stack *stack);
t_stack	*stack_map(t_stack *stack, int (*f)(int));
t_stack	*stack_new(int number);
int		stack_size(t_stack *stack);

#endif