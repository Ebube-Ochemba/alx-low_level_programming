# C - malloc, free

> This project was an introduction memory allocation.

## Summary

I learnt about the difference between automatic and dynamic allocation. Also what `malloc` and `free` are, why and when to use them and how to use `valgrind` 

## Requirements

- Standard libraries are not allowed, except specified. `printf`, `puts`, etc.
- Allowed to use [`_putchar`](https://github.com/alx-tools/_putchar.c/blob/master/_putchar.c): A
C custom function that writes a character to `stdout`, provided by Alx.

## Files

> Each file contains the solution to a task in the project.

- [0-create_array.c](https://github.com/Ebube-Ochemba/alx-low_level_programming/blob/master/0x0B-malloc_free/0-create_array.c): Returns a pointer to a newly-allocated space in memory containing an array of characters.
	- The array of characters is initialized to the parameter `c`.
- [1-strdup.c](https://github.com/Ebube-Ochemba/alx-low_level_programming/blob/master/0x0B-malloc_free/1-strdup.c): Returns a pointer to a newly-allocated space in memory containing a copy of the string passed as parameter.
	- Returns a pointer to a new string which is a duplicate of the string `str`.
	- Memory for the new string is obtained with `malloc` and can be freed with `free`.
- [2-str_concat.c](https://github.com/Ebube-Ochemba/alx-low_level_programming/blob/master/0x0B-malloc_free/2-str_concat.c): Returns a pointer to a newly-allocated space in memory containing the concatenation of two strings passed as parameters.
	- The returned pointer contains the contents of `s1` followed by `s2` and is null-terminated.
	- The function treats `NULL` as an empty string.
- [3-alloc_grid.c](https://github.com/Ebube-Ochemba/alx-low_level_programming/blob/master/0x0B-malloc_free/3-alloc_grid.c): Returns a pointer to a newly-allocated space in memory containing a two-dimensional array of integers.
	- Each element of the two-dimensional array is initialized to `0`.
- [4-free_grid.c](https://github.com/Ebube-Ochemba/alx-low_level_programming/blob/master/0x0B-malloc_free/4-free_grid.c): Frees a two-dimensional array previsouly created by the `alloc_grid` function defined in `3-alloc_grid.c`.
- [100-argstostr.c](https://github.com/Ebube-Ochemba/alx-low_level_programming/blob/master/0x0B-malloc_free/100-argstostr.c): Returns a pointer to a newly-allocated space in memory containing the concatenation of all the arguments of the program.
	- Each argument is followed by a `\n` in the new string.
- [101-strtow.c](https://github.com/Ebube-Ochemba/alx-low_level_programming/blob/master/0x0B-malloc_free/101-strtow.c): Splits a string into words.
	 - Returns a pointer to a newly-allocated space in memory containing an array of strings (words).
	- Each element of the array of strings contains a single word, null-terminated.
	- The last element of the returned array is `NULL`.
	- Words are separated by spaces.

> - [main.h](https://github.com/Ebube-Ochemba/alx-low_level_programming/blob/master/0x0B-malloc_free/main.h): A Header file containing prototypes for all functions written in the project.
> - [test_files](https://github.com/Ebube-Ochemba/alx-low_level_programming/tree/master/0x0B-malloc_free/test_files): A folder of test files. Provided by Alx.
