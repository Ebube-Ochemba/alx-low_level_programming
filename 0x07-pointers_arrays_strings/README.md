# C - Even more pointers, arrays and strings

> This project was on more pointers, arrays and string. 

## Summary

I learnt about multidimensional arrays and how to use them.

## Requirements

- Standard libraries are not allowed, except specified. `printf`, `puts`, etc.
- Allowed to use [`_putchar`](https://github.com/alx-tools/_putchar.c/blob/master/_putchar.c): A
C custom function that writes a character to `stdout`, provided by Alx.

## Files

> Each file contains the solution to a task in the project.

- [0-memset.c](https://github.com/Ebube-Ochemba/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/0-memset.c): Fills the first `n` bytes of memory area pointed to by `s` with the constant byte `b`.
	- Returns a pointer to the filled memory area `s`.
- [1-memcpy.c](https://github.com/Ebube-Ochemba/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/1-memcpy.c): Copies `n` bytes from memory area `src` to memory area `dest`.
	- Returns a pointer to the memory area `dest`.
- [2-strchr.c](https://github.com/Ebube-Ochemba/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/2-strchr.c): eturns a pointer to the first occurence of the character `c` in the string `s`.
	- If the character is not found, the function returns `NULL`.
- [3-strspn.c](https://github.com/Ebube-Ochemba/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/3-strspn.c): Returns the number of bytes in the intitial segment of memory area `s` which consist only of bytes from a substring `accept`.
- [4-strpbrk.c](https://github.com/Ebube-Ochemba/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/4-strpbrk.c): ocates the first occurence in a string `s` of any of the bytes in a string `accept`.
	- Returns a pointer to the byte in `s` that matches one of the bytes in `accept`.
	- If no matching byte is found, the function returns `NULL`.
- [5-strstr.c](https://github.com/Ebube-Ochemba/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/5-strstr.c): Finds the first occurence of a substring `needle` in a string `haystack`.
	- The terminating null bytes (`\0`) are not compared.
	- Returns a pointer to the beginning of the located substring.
	- If the substring is not found, the function returns `NULL`.
- [7-print_chessboard.c](https://github.com/Ebube-Ochemba/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/7-print_chessboard.c): Prints the chessboard.
- [8-print_diagsums.c](https://github.com/Ebube-Ochemba/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/8-print_diagsums.c): Prints the sum of the two diagonals of a square matrix of integers.
- [100-set_string.c)](https://github.com/Ebube-Ochemba/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/100-set_string.c): Sets the value of a pointer to a char.
- [101-crackme_password](https://github.com/Ebube-Ochemba/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/101-crackme_password): File that contains the password for the [crackme2](https://github.com/alx-tools/0x06.c) executable.

> - [main.h](https://github.com/Ebube-Ochemba/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/main.h): A Header file containing prototypes for all functions written in the project.
> - [test_files](https://github.com/Ebube-Ochemba/alx-low_level_programming/tree/master/0x07-pointers_arrays_strings/test_files): A folder of test files. Provided by Alx.
