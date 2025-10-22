/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 21:56:16 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/22 01:21:13 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "num.h"

long	ft_atol(char *str)
{
	long	num;
	int		negative;

	num = 0;
	negative = 1;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			negative *= -1;
	while (*str)
	{
		if (!ft_isdigit(*str))
			return ((long) INT_MAX + 1);
		num = (num * 10) + *str++ - 48;
		if ((num > INT_MAX && negative == 1)
			|| (num > (long) INT_MAX + 1 && negative == -1))
			return ((long) INT_MAX + 1);
	}
	return (num * negative);
}
