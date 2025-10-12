/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 22:29:46 by bmoreira          #+#    #+#             */
/*   Updated: 2025/10/12 19:05:49 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# ifndef INT_MAX
# 	define INT_MAX 2147483647
# endif

# ifndef INT_MIN
# 	define INT_MIN -2147483648
# endif

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

// Char
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_isspace(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);

// GNL
char	*get_next_line(int fd);

// IO
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);

// List
void	lst_add_back(t_list **lst, t_list *new);
void	lst_add_front(t_list **lst, t_list *new);
void	lst_clear(t_list **lst, void (*del)(void *));
void	lst_del_back(t_list **head, void (*del)(void *));
void	lst_del_front(t_list **head, void (*del)(void *));
void	lst_del_node(t_list *lst, void (*del)(void *));
void	lst_iter(t_list *lst, void (*f)(void *));
void	lst_print_int(t_list *head);
int		lst_size(t_list *lst);
t_list	*lst_last(t_list *lst);
t_list	*lst_map(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list	*lst_new(void *content);

// Num
long	ft_atol(char *str);
int		ft_atoi(const char *nptr);
int		ft_count_digits_ul(unsigned long n, int base);
int		ft_count_digits(int n, int base);
char	*ft_itoa_base(int n, int base, char *set);
char	*ft_itoa(int n);

// Memory
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);

// Printft
int		ft_printf(const char *s, ...);
int		ft_putchr(int c);
int		ft_put_s(char *s);
int		ft_put_n(int n, char *set, int base);
int		ft_putul(unsigned long n, char *set, int base);
int		ft_putptr(unsigned long p);

// Sort
int		cmp_int(void *a, void *b);
int		cmp_str(void *a, void *b);
int		*bubble_arr(int *arr, int size);
int		*insertion_arr(int *arr, int size);
int		*selection_arr(int *arr, int size);
void	bubble_lst(t_list *head, int (*cmp)(void *, void *));

// String
char	**ft_split_free(char **arr);
char	**ft_split(const char *s, char c);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strjoin_free(char *s1, char *s2);
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char));
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strrchr(const char *s, int c);
char	*ft_strtrim(const char *s1, const char *set);
char	*ft_substr(const char *s, unsigned int start, size_t len);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *s);

#endif