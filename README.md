*This project has been created as part of the 42 curriculum by mmatos-d.*

# Libft

## Description
Libft is the first library project of the 42 curriculum. The goal is to recreate a set of standard C library functions and develop a personal library that can be reused in future projects.
This project helps students understand memory management, string manipulation, pointers, static libraries, and Makefiles in C.

## Instructions
To compile the library:
```bash
make - This command generates the static library `libft.a`.
```
```bash
make clean - To remove all object files.
```
```bash
make fclean - To remove all object files and the library.
```
```bash
make re - To remove all generated files and recompile the library:
```

## Library Overview
The library is divided into several categories of functions:

### Character Functions
Used to check or manipulate characters.
Examples:
- ft_isalpha
- ft_isdigit
- ft_isalnum
- ft_isascii
- ft_isprint
- ft_toupper
- ft_tolower

### String Functions
Used to manipulate and inspect strings.
Examples:
- ft_strlen
- ft_strchr
- ft_strrchr
- ft_strncmp
- ft_strnstr
- ft_strdup
- ft_substr
- ft_strjoin
- ft_strtrim
- ft_split

### Memory Functions
Used to manipulate raw memory blocks.
Examples:
- ft_memset
- ft_bzero
- ft_memcpy
- ft_memmove
- ft_memchr
- ft_memcmp

### Conversion Functions
Examples:
- ft_atoi
- ft_itoa

### Memory Allocation Functions
Examples:
- ft_calloc

### File Descriptor Functions
Examples:
- ft_putchar_fd
- ft_putstr_fd
- ft_putendl_fd
- ft_putnbr_fd

## Resources
Some resources used to understand the project:
- C manual pages (man strlen, man memset, man malloc, etc.)
- 42 Libft subject
- C documentation about pointers, memory allocation, and static libraries
- Peer discussions and code reviews
