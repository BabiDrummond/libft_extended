# libft - Your very first own library

**libft** is the foundational C library project from **École 42**, where you reimplement essential C standard library functions and extras. This helps deepen your mastery of C, memory management, pointers, and linked lists.

---

## Table of Contents

1. [Project Overview](#project-overview)  
2. [Implemented Functions](#implemented-functions)  
3. [Usage](#usage)  
4. [Build Instructions](#build-instructions)  
5. [Code Style & Norm](#code-style--norm)  
6. [Contributing](#contributing)  
7. [Author](#author)

---

## Project Overview

- **Goal**: Re-create common C library functions and build them into a static library `libft.a`, to be used later in 42 projects.  
- **Skills Learned**: manual implementation of library routines, pointers and memory control, static libraries, linked lists.

---

## Implemented Functions

### Part 1: Libc-like functions (mandatory)
A collection of core functions faithfully reimplemented. Examples include:

- `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`, `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_atoi`, plus ctype-style functions like `ft_isalpha`, `ft_isdigit`, etc.  

### Part 2: Additional functions
Useful utilities beyond the classic libc, such as:

- String manipulation: `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`, `ft_striteri`, etc.  
- Output functions using file descriptors: `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`.

### Bonus: Linked‑list functions
Struct and manipulation utilities (bonus part), like:

- `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstsize`, `ft_lstlast`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`.

---

## Usage

Clone the repo and build the library:

```bash
git clone https://github.com/BabiDrummond/libft.git
cd libft
make
```

This produces `libft.a`.

Link it to your project:

```bash
gcc -Wall -Wextra -Werror -L. -lft your_code.c -o your_program
```

Include header in your source:

```c
#include "libft.h"
```

---

## Build Instructions

- `make`: compiles all `.c` files into `.o`, then archives into `libft.a`.  
- `make clean`: removes object files.  
- `make fclean`: removes object files and `libft.a`.  
- `make re`: runs fclean and then all again.

---

## Code Style & Norm

- Conforms to 42’s **Norminette** (coding style norms).  
- All functions are prefixed with `ft_`.  
- No forbidden functions, no memory leaks.

---

## Contributing

This is a personal project for learning—feel free to suggest improvements or report issues. Contributions are welcome (via PR or issue).

---

## Author

**BabiDrummond** – Student at École 42.