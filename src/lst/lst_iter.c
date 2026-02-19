/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_iter.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 17:10:25 by bmoreira          #+#    #+#             */
/*   Updated: 2026/02/19 16:55:30 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lst.h"

void	lst_iter(t_list *node, void (*f)(void *))
{
	if (!node || !f)
		return ;
	while (node)
	{
		(*f)(node->content);
		node = node->next;
	}
}
