*This activity has been created as part of the 42 curriculum by raaalali*  

# 🚀 Libft - Personal C Library  

## 📄 Description  
**Libft** is a personal static C library reimplementing 42 Next’s 43 mandatory functions. It helps understand low-level programming concepts such as memory management, string manipulation, character operations, and linked list data structures. The library is fully reusable in future 42 projects.  

---

## ⚙️ Compilation  
- Compile library: `make` → generates `libft.a`  
- Remove object files: `make clean`  
- Remove objects + library: `make fclean`  
- Recompile from scratch: `make re`  

---

## 💻 Usage  
- Include header: `#include "libft.h"`  
- Compile program with library: `gcc main.c libft.a -o main`  

---

## 🧰 Library Overview  
**43 functions** grouped into:  
1. **Standard Library Functions**  
2. **Additional Utility Functions**  
3. **Linked List Functions**  

---

### 🧩 1. Standard Library Functions  

**Memory & String Manipulation:**  
- 🟢 `ft_memset` — fill memory with a byte  
- 🟢 `ft_bzero` — set memory bytes to zero  
- 🟢 `ft_memcpy` — copy `n` bytes (non-overlapping)  
- 🟢 `ft_memmove` — copy `n` bytes safely (handles overlap)  
- 🟢 `ft_strlen` — get string length  
- 🟢 `ft_strlcpy` — copy string into buffer safely  
- 🟢 `ft_strlcat` — append string into buffer safely  
- 🟢 `ft_strncmp` — compare strings up to `n` chars  
- 🟢 `ft_strdup` — duplicate string with memory allocation  

**Character & Conversion:**  
- 🔵 `ft_atoi` — convert string to integer  
- 🔵 `ft_isalpha` — check if alphabetic  
- 🔵 `ft_isdigit` — check if digit  
- 🔵 `ft_isalnum` — check if alphanumeric  
- 🔵 `ft_isascii` — check if ASCII (0-127)  
- 🔵 `ft_isprint` — check if printable  
- 🔵 `ft_toupper` — convert lowercase → uppercase  
- 🔵 `ft_tolower` — convert uppercase → lowercase  

---

### 🔧 2. Additional Utility Functions  
- ✨ `ft_substr` — extract substring  
- ✨ `ft_strjoin` — join two strings  
- ✨ `ft_strtrim` — trim set of chars from start/end  
- ✨ `ft_split` — split string by delimiter  
- ✨ `ft_itoa` — int → string  
- ✨ `ft_strmapi` — map function to each char (new string)  
- ✨ `ft_striteri` — map function to each char (in-place)  
- ✨ `ft_putchar_fd` — write char to file descriptor  
- ✨ `ft_putstr_fd` — write string to fd  
- ✨ `ft_putendl_fd` — write string + newline to fd  
- ✨ `ft_putnbr_fd` — write integer as string to fd  

---

### 🔗 3. Linked List Functions  
**t_list struct:**  

typedef struct s_list {
    void *content;
    struct s_list *next;
} t_list;

Functions:

- 🟣 `ft_lstnew` — create new node
- 🟣 `ft_lstadd_front` — add node at beginning
- 🟣 `ft_lstadd_back` — add node at end
- 🟣 `ft_lstsize` — return number of nodes
- 🟣 `ft_lstlast` — return last node
- 🟣 `ft_lstdelone` — delete a single node
- 🟣 `ft_lstclear` — delete all nodes
- 🟣 `ft_lstiter` — iterate and apply function to content
- 🟣 `ft_lstmap` — map function to each node and create new list

📚 Resources

    42 subject PDF / official docs

    Linux man pages (man 3 function)

    C Standard Library Reference

🤖 AI Usage

AI was used only to structure and polish this README. All source code was implemented, tested, and validated manually.