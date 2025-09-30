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
	lst/ft_lstadd_back.c	\
	lst/ft_lstadd_front.c	\
	lst/ft_lstclear.c		\
	lst/ft_lstdelone.c		\
	lst/ft_lstiter.c		\
	lst/ft_lstlast.c		\
	lst/ft_lstmap.c			\
	lst/ft_lstnew.c			\
	lst/ft_lstsize.c		\
	lst/lst_del_front.c		\
	math/count_digits_ul.c	\
	math/count_digits.c		\
	math/ft_atoi.c			\
	math/ft_itoa_base.c		\
	math/ft_itoa.c			\
	mem/ft_bzero.c			\
	mem/ft_calloc.c			\
	mem/ft_memchr.c			\
	mem/ft_memcmp.c			\
	mem/ft_memcpy.c			\
	mem/ft_memmove.c		\
	mem/ft_memset.c			\
	printf/ft_printf.c		\
	printf/ft_put.c			\
	sort/bubble_sort_arr.c	\
	sort/bubble_sort_lst.c	\
	sort/insertion_sort_arr.c \
	sort/selection_sort_arr.c \
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