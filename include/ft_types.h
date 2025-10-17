/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_types.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helios <helios@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 22:40:46 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/17 02:04:51 by helios           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TYPES_H
# define FT_TYPES_H

# ifndef INT_MAX
# 	define INT_MAX 2147483647
# endif

# ifndef INT_MIN
# 	define INT_MIN -2147483648
# endif

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

#endif