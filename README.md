*This activity has been created as part of the 42 curriculum by raaalali.*

# Libft

![C](https://img.shields.io/badge/language-C-A8B9CC?style=flat-square&logo=c&logoColor=black)
![Norm](https://img.shields.io/badge/flags--Wall%20--Wextra%20--Werror-informational?style=flat-square)
![Functions](https://img.shields.io/badge/functions-43-38bdf8?style=flat-square)

A static C library that re-implements a core subset of libc and adds the string and list utilities the rest of my C projects build on. No external dependencies beyond `malloc`, `free` and `write`.

## Build

```sh
make          # builds libft.a
make clean    # removes object files
make fclean   # removes objects and libft.a
make re       # full rebuild
```

```sh
cc main.c -L. -lft -o main
```

## API

### libc re-implementations

| Memory | Strings | Characters & conversion |
| --- | --- | --- |
| `ft_memset` `ft_bzero` `ft_memcpy` `ft_memmove` `ft_memchr` `ft_memcmp` `ft_calloc` | `ft_strlen` `ft_strlcpy` `ft_strlcat` `ft_strchr` `ft_strrchr` `ft_strncmp` `ft_strnstr` `ft_strdup` | `ft_atoi` `ft_isalpha` `ft_isdigit` `ft_isalnum` `ft_isascii` `ft_isprint` `ft_toupper` `ft_tolower` |

### Additional utilities

| Function | Purpose |
| --- | --- |
| `ft_substr` `ft_strjoin` `ft_strtrim` | Allocate new strings from slices, concatenations and trimmed input |
| `ft_split` | Split on a delimiter into a `NULL`-terminated array, freeing everything on partial failure |
| `ft_itoa` | Integer to string, including `INT_MIN` |
| `ft_strmapi` `ft_striteri` | Apply a function per character, to a copy or in place |
| `ft_putchar_fd` `ft_putstr_fd` `ft_putendl_fd` `ft_putnbr_fd` | Unbuffered output to any file descriptor |

### Linked list

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

`ft_lstnew` `ft_lstadd_front` `ft_lstadd_back` `ft_lstsize` `ft_lstlast` `ft_lstdelone` `ft_lstclear` `ft_lstiter` `ft_lstmap`

`ft_lstmap` builds a new list and clears it with the caller's `del` if any allocation fails, so it never leaks on error.

## Design notes

- Every allocating function returns `NULL` on failure and frees anything it allocated along the way.
- `ft_memmove` handles overlapping regions by choosing copy direction; `ft_memcpy` does not, matching libc semantics.
- `ft_strlcpy` / `ft_strlcat` return the length they tried to create, so callers can detect truncation.

## Resources

- 42 subject and `man 3` pages for each libc function
- C standard library reference

## AI usage

AI was used only to structure and polish this README. All source code was implemented, tested and validated manually.
