/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 22:42:21 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/13 22:49:24 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NUM_H
# define NUM_H

long	ft_atol(char *str);
int		ft_atoi(const char *nptr);
int		ft_count_digits_ul(unsigned long n, int base);
int		ft_count_digits(int n, int base);
char	*ft_itoa_base(int n, int base, char *set);
char	*ft_itoa(int n);

#endif