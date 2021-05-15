# Libft
First project @42Paris recreating libc functions in C language.
Various functions were added after validating the project (there are even some that may not exist in the real libc).

## The library
It contains most of the functions of the following header files from the libc:
`ctype.h`
`math.h`
`printf.h`
`stdint.h`
`stdio.h`
`stdlib.h`
`string.h`

Adding some custom functions and header too as, for example:
`ansi_codes.h`
`defs.h`
`ft_list.h`
`get_next_line.h`

Feel free to check out the actual prototypes and code of the functions !

## Installation
Compile the lib with a simple `make` command.
You can then add `#include <libft.h>` in your project and compile with the flags `-Ilibft/incs -Llibft -lft` (assuming that you are in the parent directory).
