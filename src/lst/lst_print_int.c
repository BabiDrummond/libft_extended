/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_print_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 18:39:49 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/11 23:29:23 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	lst_print_int(t_list *head)
{
	while(head)
	{
		ft_printf("%d\n", *(int *)head->content);
		head = head->next;
	}
}
