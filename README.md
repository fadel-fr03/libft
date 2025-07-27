# Libft

![Language](https://img.shields.io/badge/language-C-blue)
![Status](https://img.shields.io/badge/build-passing-brightgreen)


Libft is a foundational C library built as part of the 42 School curriculum. It reimplements many standard C functions, introduces additional utility functions, and provides bonus support for singly linked list operations.

---

## 📌 Table of Contents

* [About the Project](#about-the-project)
* [Features](#features)
* [Project Structure](#project-structure)
* [How to Build](#how-to-build)
* [Usage](#usage)
* [Code Examples](#code-examples)
* [Screenshots / Visuals](#screenshots--visuals)
* [Bonus Part - Linked Lists](#bonus-part---linked-lists)
* [Learnings](#learnings)
* [How to Add Images](#how-to-add-images)
* [License](#license)

---

## 📖 About the Project

The standard C library provides powerful tools—but understanding them deeply means building them yourself.

Libft helps you:

* Recreate critical functions (`memcpy`, `strlcpy`, etc.)
* Improve your grasp of memory handling and pointer arithmetic
* Develop clean, testable, and norm-compliant code

---

## ✨ Features

### ✅ Mandatory Functions

* **Character checks:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, etc.
* **Memory handling:** `ft_memset`, `ft_memcpy`, `ft_bzero`, etc.
* **String manipulation:** `ft_strlen`, `ft_strchr`, `ft_strdup`, etc.
* **Conversions:** `ft_atoi`, `ft_toupper`, `ft_tolower`
* **Dynamic allocation:** `ft_calloc`, `ft_substr`, `ft_strjoin`, etc.
* **File descriptor output:** `ft_putchar_fd`, `ft_putendl_fd`, etc.

### 🧪 Bonus Functions

* Custom singly linked list manipulation via `t_list`
* `ft_lstnew`, `ft_lstadd_back`, `ft_lstdelone`, etc.

---

## 📁 Project Structure

```bash
.
├── libft.h               # Header file
├── Makefile              # Build file
├── ft_*.c                # 40+ implementation files
└── README.md             # This file
```

All source files are located at the root level as per 42 Norm guidelines.

---

## ⚙️ How to Build

To compile the library:

```bash
make
```

This will generate `libft.a`, the static library containing all your functions.

To clean object files:

```bash
make clean
```

To clean all build artifacts (including `libft.a`):

```bash
make fclean
```

To recompile from scratch:

```bash
make re
```

To include the bonus functions:

```bash
make bonus
```

---

## 🧪 Usage

You can include this library in your 42 projects by:

1. Copying the `libft/` folder into your project.
2. Including it in your project’s Makefile.

Here’s an example of compiling with `libft.a`:

```bash
gcc -Wall -Wextra -Werror main.c -L. -lft
```

And in your `main.c`:

```c
#include "libft.h"

int main(void)
{
    char *s = ft_strdup("Hello, Libft!");
    ft_putendl_fd(s, 1);
    free(s);
    return 0;
}
```

---

## 🧍‍♂️ Code Examples

### 🔺 Example: `ft_strtrim`

```c
char *ft_strtrim(char const *s1, char const *set)
{
    // Removes leading and trailing characters found in 'set'
}
```

### 🔺 Example: `ft_lstadd_back`

```c
void ft_lstadd_back(t_list **lst, t_list *new)
{
    // Adds the new node at the end of the list
}
```
---

## 🨠 Bonus Part - Linked Lists

A bonus challenge involved implementing linked list utilities using:

```c
typedef struct s_list
{
    void          *content;
    struct s_list *next;
} t_list;
```

Key functions include:

* `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`
* `ft_lstlast`, `ft_lstadd_back`
* `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

---

## 📚 Learnings

* Mastered core C concepts like memory allocation, pointers, and string handling
* Learned how to implement clean APIs following the 42 Norm
* Built confidence in debugging and memory leak prevention
* Understood how libc functions behave internally

---

## 📄 License

This project is built under the **42 School educational license**. You may reuse or build on it for **educational** and **non-commercial** purposes.

---

## 💬 Questions?

Feel free to reach out via issues or by opening a discussion on GitHub.
