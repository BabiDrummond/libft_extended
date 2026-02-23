/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 02:16:44 by bmoreira          #+#    #+#             */
/*   Updated: 2026/02/23 03:06:49 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (0);
	while (*s)
		if (*s++ == (char) c)
			return ((char *)--s);
	if (*s == (char) c)
		return ((char *) s);
	return (0);
}

/*
int main(void)
{
	#include <stdio.h>

	printf("%s\n", ft_strchr("oie td bem?", 'e'));
}
*/