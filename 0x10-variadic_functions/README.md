# C - Variadic functions

> This project was an introduction to variadic functions.

## Summary

I learnt about using variadic functions with the `va_start`, `va_arg`, and `va_end` macros as well as why and how to use the `const` type qualifier in C.

## Requirements

- Standard libraries are not allowed, except specified. `printf`, `puts`, etc.
- Allowed to use [`_putchar`](https://github.com/alx-tools/_putchar.c/blob/master/_putchar.c): A
C custom function that writes a character to `stdout`, provided by Alx.

## Files

> Each file contains the solution to a task in the project.

- [x] [0-sum_them_all.c](https://github.com/Ebube-Ochemba/alx-low_level_programming/blob/master/0x10-variadic_functions/0-sum_them_all.c): Returns the sum of all its paramters.
- [x] [1-print_numbers.c](https://github.com/Ebube-Ochemba/alx-low_level_programming/blob/master/0x10-variadic_functions/1-print_numbers.c): Prints numbers, followed by a new line.
	- The paramter `separator` is the string to be printed between numbers.
	- The paramter `n` is the number of integers passed to the function.
- [x] [2-print_strings.c](https://github.com/Ebube-Ochemba/alx-low_level_programming/blob/master/0x10-variadic_functions/2-print_strings.c): Prints strings, followed by a new line.
	- The parameter `separator` is the string to be printed between the strings.
	- The parameter `n` is the number of strings passed to the functio
- [x] [3-print_all.c](https://github.com/Ebube-Ochemba/alx-low_level_programming/blob/master/0x10-variadic_functions/3-print_all.c): rints anything.
	- Usage: `print_all("ceis", 'H', 0, "lberton");`
	- The paramter `format` is a list of types of arguments passed to the function (`c`:`char`, `i`:`int`, `f`:`float`, `s`:`char *` (if the string is `NULL`, `(nil)` is printed instead))
	- Any other character is ignored.

> - [variadic_functions.h](https://github.com/Ebube-Ochemba/alx-low_level_programming/blob/master/0x10-variadic_functions/variadic_functions.h): A Header file containing prototypes for all functions written in the project.
> - [test_files](https://github.com/Ebube-Ochemba/alx-low_level_programming/tree/master/0x10-variadic_functions/test_files): A folder of test files. Provided by Alx.
