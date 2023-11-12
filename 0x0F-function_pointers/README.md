# C - Function pointers

> This project was an introduction to function pointers.

## Summary

I learnt about function pointers in C; their contents, where they point in virtual memory, and how to use them.

## Requirements

- Standard libraries are not allowed, except specified. `printf`, `puts`, etc.
- Allowed to use [`_putchar`](https://github.com/alx-tools/_putchar.c/blob/master/_putchar.c): A
C custom function that writes a character to `stdout`, provided by Alx.

## Files

> Each file contains the solution to a task in the project.

- [0-print_name.c](https://github.com/Ebube-Ochemba/alx-low_level_programming/blob/master/0x0F-function_pointers/0-print_name.c): Prints a name using a function given as a parameter.
- [1-array_iterator.c](https://github.com/Ebube-Ochemba/alx-low_level_programming/blob/master/0x0F-function_pointers/1-array_iterator.c): Executes a function given as a parameter on each element of an array.
- [2-int_index.c](https://github.com/Ebube-Ochemba/alx-low_level_programming/blob/master/0x0F-function_pointers/2-int_index.c): Searches for an integer using a comparative function given as a parameter.
- [3-calc.h](https://github.com/Ebube-Ochemba/alx-low_level_programming/blob/master/0x0F-function_pointers/3-calc.h): A header file for `3-main.c`, `3-op_functions.c`, and `3-get_op_func.c`.
- [3-get_op_func.c](https://github.com/Ebube-Ochemba/alx-low_level_programming/blob/master/0x0F-function_pointers/3-get_op_func.c): contains the following 5 functions:
	- `int op_add(int a, int b)` - returns the sum of `a` and `b`.
	- `int op_sub(int a, int b)` - returns the difference of `a` and `b`.
	- `int op_mul(int a, int b)` - returns the product of `a` and `b`.
	- `int op_div(int a, int b)` - returns the result of the division of `a` by `b`.
	- `int op_mod(int a, int b)` - returns the remainder of the division of `a` by `b`.
- [3-main.c](https://github.com/Ebube-Ochemba/alx-low_level_programming/blob/master/0x0F-function_pointers/3-main.c): Performs simple operations passed in as parameters.
- [3-op_functions.c](https://github.com/Ebube-Ochemba/alx-low_level_programming/blob/master/0x0F-function_pointers/3-op_functions.c): Selects the correct function from `3-op_functions.c` to perform the operation asked by the user.
- [100-main_opcodes.c](https://github.com/Ebube-Ochemba/alx-low_level_programming/blob/master/0x0F-function_pointers/100-main_opcodes.c): Prints the `opcodes` of its own main function, followed by a new line.
	- Usage: `./main number_of_bytes`
	- Opcodes are printed two-decimal long in hexadecimal, lowercase.
	- each opcode is two char long.
	- listing ends with a new line.

> - [function_pointers.h](https://github.com/Ebube-Ochemba/alx-low_level_programming/blob/master/0x0F-function_pointers/function_pointers.h): A header file for `0-print_name.c`, `1-array_iterator.c`, and `2-int_index.c`.
> - [test_files](https://github.com/Ebube-Ochemba/alx-low_level_programming/tree/master/0x0F-function_pointers/test_files): A folder of test files. Provided by Alx.
