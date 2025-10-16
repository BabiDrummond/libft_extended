/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 22:19:08 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/15 22:31:47 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

# include <unistd.h>
# include "ft_types.h"
# include "printf.h"

void	stack_add_back(t_stack **top, t_stack *new);
void	stack_add_front(t_stack **top, t_stack *new);
void	stack_clear(t_stack **top, void (*del)(int));
void	stack_del_back(t_stack **top, void (*del)(int));
void	stack_del_front(t_stack **top, void (*del)(int));
void	stack_del_node(t_stack *stack, void (*del)(int));
void	stack_iter(t_stack *stack, void (*f)(int));
void	stack_print_int(t_stack *top);
t_stack	*stack_last(t_stack *stack);
t_stack	*stack_map(t_stack *stack, int (*f)(int), void (*del)(int));
t_stack	*stack_new(int number);
int		stack_size(t_stack *stack);

#endif