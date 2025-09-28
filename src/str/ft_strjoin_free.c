/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 17:11:29 by bmoreira          #+#    #+#             */
/*   Updated: 2025/09/27 19:08:18 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

char	*ft_strjoin_free(char *s1, char *s2)
{
	char	*new;
	int		i;
	int		j;

	new = ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
	i = -1;
	j = 0;
	if (!new)
		return (NULL);
	while (s1[++i])
		new[i] = s1[i];
	while (s2[j])
		new[i++] = s2[j++];
	new[i] = '\0';
	free(s1);
	free(s2);
	return (new);
}

/*
int main(void)
{
	char *str1 = ft_strdup("manhê, phineas e pherb ");
	char *str2 = ft_strdup("estão fazendo a abertura da serie");
	char *result = ft_strjoin_free(str1, str2);
	ft_printf("%s\n", result);
	free(result);
}
*/