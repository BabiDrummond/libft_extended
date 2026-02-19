/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_triple_join.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 19:25:33 by bmoreira          #+#    #+#             */
/*   Updated: 2026/02/19 19:28:34 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

char	*ft_triple_join(char *s1, char *s2, char *s3)
{
   	char	*new_str;
	char	*temp;

	new_str = ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1 + ft_strlen(s3) + 1, sizeof(char));
	temp = new_str;
	if (!new_str)
		return (NULL);
	while (*s1)
		*new_str++ = *s1++;
	while (*s2)
		*new_str++ = *s2++;
    while (*s3)
		*new_str++ = *s3++;
	return (temp);
}
