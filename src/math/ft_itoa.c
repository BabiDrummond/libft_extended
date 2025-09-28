/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 18:17:32 by bmoreira          #+#    #+#             */
/*   Updated: 2025/09/27 18:37:19 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		negative;

	negative = 0;
	len = count_digits(n, 10);
	str = ft_calloc(len + 1, sizeof(char));
	if (n == -2147483648)
		return ((char *) ft_memcpy(str, "-2147483648", len));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		n *= -1;
		str[negative] = '-';
		negative++;
	}
	while (--len >= negative)
	{
		str[len] = n % 10 + 48;
		n = n / 10;
	}
	return (str);
}

/*
int main(void)
{	
	#include <stdio.h>
	printf("%s\n", ft_itoa(2147483647));
}
*/