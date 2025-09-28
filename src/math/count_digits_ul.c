/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_digits_ul.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 18:16:40 by bmoreira          #+#    #+#             */
/*   Updated: 2025/09/27 18:36:18 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count_digits_ul(unsigned long n, int base)
{
	int	len;

	len = 0;
	if (n == 0)
		len++;
	while (n && ++len)
		n = n / base;
	return (len);
}