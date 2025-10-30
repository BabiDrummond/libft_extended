/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 21:10:41 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/29 21:13:06 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATRIX_H
# define MATRIX_H

# include "mem.h"
# include "printf.h"
# include "str.h"

char	**ft_matrix_dup(char **matrix);
int		ft_matrix_len(char **matrix);
void	ft_matrix_print(char **matrix);

#endif