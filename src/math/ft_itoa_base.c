/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 21:47:33 by bmoreira          #+#    #+#             */
/*   Updated: 2025/09/27 21:51:23 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

char	*ft_itoa_base(int n, int base, char *set)
{
	char	*str;
	int		digits;
	int		negative;

	negative = 0;
	digits = count_digits(n, base);
	str = ft_calloc(digits + 1, sizeof(char));
	if (n == -2147483648)
		return ((char *) ft_memcpy(str, "-2147483648", digits));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		n *= -1;
		str[negative] = '-';
		negative++;
	}
	while (--digits >= 0)
	{
		str[digits] = set[n % base];
		n /= base;
	}
	return (str);
}
