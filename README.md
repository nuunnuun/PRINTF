# ft_printf

A custom implementation of the C standard library `printf` function, developed as part of the 42 Bangkok curriculum.

## Overview

The goal of this project is to recreate the core behavior of `printf` while learning how variadic functions work in C.

The implementation supports:

- `%c` — character
- `%s` — string
- `%p` — pointer address
- `%d` — signed decimal integer
- `%i` — signed integer
- `%u` — unsigned decimal integer
- `%x` — lowercase hexadecimal
- `%X` — uppercase hexadecimal
- `%%` — percent sign

## Concepts Practiced

- Variadic functions with `va_list`
- Recursive number conversion
- Signed and unsigned integer handling
- Hexadecimal conversion
- Pointer formatting
- Static libraries
- Makefiles
- 42 Norm coding standard

## Build

```bash
make
```

This creates the static library:

```text
libftprintf.a
```

## Usage

Include the header:

```c
#include "ft_printf.h"
```

Compile your program with the library:

```bash
cc main.c libftprintf.a
```

Example:

```c
ft_printf("Hello %s, number: %d\n", "42", 42);
```

## Makefile Commands

```bash
make
make clean
make fclean
make re
```

## Project Status

- Builds successfully with `-Wall -Wextra -Werror`
- Passes Norminette
- Tested with characters, strings, signed integers, unsigned integers, hexadecimal values, pointers, and percent conversion

## Author

Kullatida Raksanaves  
42 Bangkok
