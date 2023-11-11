# C - More malloc, free

> This project was more on memory allocation.

## Summary

I learnt about the `exit`, `calloc` and `realloc` functions and how to use them.

## Requirements

- Standard libraries are not allowed, except specified. `printf`, `puts`, etc.
- Allowed to use [`_putchar`](https://github.com/alx-tools/_putchar.c/blob/master/_putchar.c): A
C custom function that writes a character to `stdout`, provided by Alx.

## Files

> Each file contains the solution to a task in the project.

- [0-malloc_checked.c](https://github.com/Ebube-Ochemba/alx-low_level_programming/blob/master/0x0C-more_malloc_free/0-malloc_checked.c): Returns a pointer to a newly-allocated space in memory using `malloc`.
- [1-string_nconcat.c](https://github.com/Ebube-Ochemba/alx-low_level_programming/blob/master/0x0C-more_malloc_free/1-string_nconcat.c): Returns a pointer to a newly-allocated space in memory containing the concatenation of two strings.
	- The returned pointer contains `s1` followed by the first `n` bytes of `s2`, null-terminated.
- [2-calloc.c](https://github.com/Ebube-Ochemba/alx-low_level_programming/blob/master/0x0C-more_malloc_free/2-calloc.c): Returns a pointer to a newly-allocated space in memory for an array, using `malloc`.
	- Allocates memory for an array of `nmemb` elements of `size` bytes each.
- [3-array_range.c](https://github.com/Ebube-Ochemba/alx-low_level_programming/blob/master/0x0C-more_malloc_free/3-array_range.c): Returns a pointer to a newly-allocated space in memory containing an array of integers.
	- The array contains all the values from parameters `min` to `max`, inclusive, ordered from `min` to `max`.
- [100-realloc.c](https://github.com/Ebube-Ochemba/alx-low_level_programming/blob/master/0x0C-more_malloc_free/100-realloc.c): eallocates a memory block using `malloc` and `free`.
	- The parameter `ptr` is a pointer to the memory previously allocated with a call to `malloc: malloc(old_size)`.
	- The paramter `old_size` is the size, in bytes, of the allocated space for ptr.
	- The paramter `new_size` is the new size, in bytes, of the new memory block.
	- The contens of `ptr` are copied to the newly-allocated space in the range from the start of `ptr` up to the minimum of `old_size` and `new_size`.
	- If `new_size` > `old_size`, the "added" memory is not initialized.
	- If `new_size` == `old_size`, the function returns `ptr`.
	- If `ptr` is `NULL`, the call is equivalent to `malloc(new_size)` for all values of `old_size` and `new_size`.
- [101-mul.c](https://github.com/Ebube-Ochemba/alx-low_level_programming/blob/master/0x0C-more_malloc_free/101-mul.c): Multiplies two positive numbers.
	- Usage: `mul num1 num2`.
	- The function assumes `num1` and `num2` are passed in base 10

> - [main.h](https://github.com/Ebube-Ochemba/alx-low_level_programming/blob/master/0x0C-more_malloc_free/main.h): A Header file containing prototypes for all functions written in the project.
> - [test_files](https://github.com/Ebube-Ochemba/alx-low_level_programming/tree/master/0x0C-more_malloc_free/test_files): A folder of test files. Provided by Alx.
