# C - More pointers, arrays and strings

> This project was on more pointers, arrays and string.

## Summary

I learnt more about pointers, arrays and string.

## Requirements

- Standard libraries are not allowed, except specified. `printf`, `puts`, etc.
- Allowed to use [`_putchar`](https://github.com/alx-tools/_putchar.c/blob/master/_putchar.c): A
C custom function that writes a character to `stdout`, provided by Alx.

## Files

> Each file contains the solution to a task in the project.

- [x] [0-strcat.c](https://github.com/Ebube-Ochemba/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/0-strcat.c): Concatenates two strings.
- [x] [1-strncat.c](https://github.com/Ebube-Ochemba/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/1-strncat.c): Concatenates two strings up to `n` bytes.
	- Adds a terminating null byte at end, unless source string is longer than maximum byte number.
- [x] [2-strncpy.c](https://github.com/Ebube-Ochemba/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/2-strncpy.c): Copies a string, including the terminating null byte, using at most an inputted number of bytes.
- [x] [3-strcmp.c](https://github.com/Ebube-Ochemba/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/3-strcmp.c): Copies a string, including the terminating null byte, using at most an inputted number of bytes.
	- Returns the difference in bytes at point of difference.
	- Works identically to the standard library function strcmp.
- [x] [4-rev_array.c](https://github.com/Ebube-Ochemba/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/4-rev_array.c): Reverses the content of an array of integers.
- [x] [5-string_toupper.c](https://github.com/Ebube-Ochemba/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/5-string_toupper.c): Changes all lowercase letters of a string to uppercase.
- [x] [6-cap_string.c](https://github.com/Ebube-Ochemba/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/6-cap_string.c): Capitalizes all words of a string.
- [ ] [7-leet.c](https://github.com/Ebube-Ochemba/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/7-leet.c): Encodes a string into 1337, without `switch` or ternary operations and using only one `if` and two loops.
- [ ] [100-rot13.c](https://github.com/Ebube-Ochemba/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/100-rot13.c): Encodes a string to rot13, without `switch` or ternary operations and using only one `if` and two loops.
- [ ] [101-print_number.c](https://github.com/Ebube-Ochemba/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/101-print_number.c): Prints an integer without using `long`, arrays, pointers, or hard-coded special values.
- [ ] [102-magic.c](https://github.com/Ebube-Ochemba/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/102-magic.c): Prints `a[2] = 98` using pointer magic.
	- incomplete [source code](https://github.com/alx-tools/make_magic_happen/blob/master/magic.c).
- [103-infinite_add.c](https://github.com/Ebube-Ochemba/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/103-infinite_add.c): Adds two numbers stored in strings to a buffer.
- [104-print_buffer.c](https://github.com/Ebube-Ochemba/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/104-print_buffer.c): Prints the content of an inputted number of bytes from a buffer.
	- Prints 10 bytes per line.
	- Starts with the position of the first byte in hexadecimal (8 chars), starting with `0`.
	- Each line shows the hexadecimal content (2 chars) of the buffer, 2 bytes at a time, separated by a space.
	- Each line shows the content of the buffer. Prints the byte if it is printable; if not, prints `.`.
	- Each line ends with a new line `\n`.
	- If the inputted byte size is 0 or less, the function only prints a new line.

> - [main.h](https://github.com/Ebube-Ochemba/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/main.h): A Header file containing prototypes for all functions written in the project.
> - [test_files](https://github.com/Ebube-Ochemba/alx-low_level_programming/tree/master/0x06-pointers_arrays_strings/test_files): A folder of test files. Provided by Alx.
