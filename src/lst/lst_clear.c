/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_clear.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 17:19:04 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/13 22:48:01 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/lst.h"

void	lst_clear(t_list **lst, void (*del)(void *))
{
	t_list	*next;

	if (!lst || !del || !*lst)
		return ;
	while (*lst)
	{
		next = (*lst)->next;
		lst_del_node(*lst, (*del));
		*lst = next;
	}
	*lst = NULL;
}
