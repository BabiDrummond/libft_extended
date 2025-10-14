/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 22:32:41 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/13 22:52:49 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GNL_H
# define GNL_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

static size_t	gnl_strchr(char *s, char c);
static char	    *read_buffer(char *buffer, int fd);
static char	    *read_line(char *buffer, char **line);
char	        *get_next_line(int fd);

#endif