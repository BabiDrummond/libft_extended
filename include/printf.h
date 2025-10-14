/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 22:42:23 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/13 22:49:43 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

int		ft_printf(const char *s, ...);
int		ft_putchr(int c);
int		ft_put_s(char *s);
int		ft_put_n(int n, char *set, int base);
int		ft_putul(unsigned long n, char *set, int base);
int		ft_putptr(unsigned long p);

#endif