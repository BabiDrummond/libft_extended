NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I./include/

SRCS_DIR = src/
SRCS = char/ft_isalnum.c	\
	char/ft_isalpha.c		\
	char/ft_isascii.c		\
	char/ft_isdigit.c		\
	char/ft_isprint.c		\
	char/ft_isspace.c		\
	char/ft_tolower.c		\
	char/ft_toupper.c		\
	gnl/get_next_line.c		\
	io/ft_putchar_fd.c		\
	io/ft_putendl_fd.c		\
	io/ft_putnbr_fd.c		\
	io/ft_putstr_fd.c		\
	lst/lst_add_back.c		\
	lst/lst_add_front.c		\
	lst/lst_bubble_sort.c	\
	lst/lst_clear.c			\
	lst/lst_del_back.c		\
	lst/lst_del_front.c		\
	lst/lst_del_node.c		\
	lst/lst_iter.c			\
	lst/lst_last.c			\
	lst/lst_map.c			\
	lst/lst_new.c			\
	lst/lst_print_int.c		\
	lst/lst_size.c			\
	mem/ft_bzero.c			\
	mem/ft_calloc.c			\
	mem/ft_memchr.c			\
	mem/ft_memcmp.c			\
	mem/ft_memcpy.c			\
	mem/ft_memmove.c		\
	mem/ft_memset.c			\
	num/ft_atoi.c			\
	num/ft_atol.c			\
	num/ft_count_digits_ul.c \
	num/ft_count_digits.c	\
	num/ft_itoa_base.c		\
	num/ft_itoa.c			\
	printf/ft_printf.c		\
	printf/ft_put.c			\
	sort/bubble_sort.c		\
	sort/insertion_sort.c 	\
	sort/selection_sort.c 	\
	stack/stack_add_back.c	\
	stack/stack_add_front.c	\
	stack/stack_bubble_sort.c \
	stack/stack_clear.c		\
	stack/stack_del_back.c	\
	stack/stack_del_front.c	\
	stack/stack_del_node.c	\
	stack/stack_iter.c		\
	stack/stack_last.c		\
	stack/stack_map.c		\
	stack/stack_new.c		\
	stack/stack_print.c		\
	stack/stack_size.c		\
	str/ft_split_free.c		\
	str/ft_split.c			\
	str/ft_strchr.c			\
	str/ft_strdup.c			\
	str/ft_striteri.c		\
	str/ft_strjoin_free.c	\
	str/ft_strjoin.c		\
	str/ft_strlcat.c		\
	str/ft_strlcpy.c		\
	str/ft_strlen.c			\
	str/ft_strmapi.c		\
	str/ft_strncmp.c		\
	str/ft_strnstr.c		\
	str/ft_strrchr.c		\
	str/ft_strtrim.c		\
	str/ft_substr.c
OBJS_DIR = objs/
OBJS = $(SRCS:%.c=$(OBJS_DIR)%.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(OBJS_DIR)%.o: $(SRCS_DIR)%.c
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -rf $(OBJS_DIR)

fclean: clean
	rm -f $(NAME)

re:	fclean all