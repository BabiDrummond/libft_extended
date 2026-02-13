/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 22:42:23 by bmoreira          #+#    #+#             */
/*   Updated: 2026/02/12 21:08:47 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include "types.h"
# include "io.h"
# include "num.h"
# include "str.h"

int		ft_printf(const char *s, ...);
int		ft_putchr(int c);
int		ft_put_s(char *s);
int		ft_put_n(int n, char *set, int base);
int		ft_putul(unsigned long n, char *set, int base);
int		ft_putptr(unsigned long p);

#endif