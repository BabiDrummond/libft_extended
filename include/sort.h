/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 22:42:26 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/13 22:50:20 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORT_H
# define SORT_H

# include "ft_types.h"

int		cmp_int(void *a, void *b);
int		cmp_str(void *a, void *b);
int		*bubble_arr(int *arr, int size);
int		*insertion_arr(int *arr, int size);
int		*selection_arr(int *arr, int size);
void	bubble_lst(t_list *head, int (*cmp)(void *, void *));

#endif