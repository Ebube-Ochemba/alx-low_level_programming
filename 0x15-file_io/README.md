# C - File I/O

> This project was an introduction to File I/O in C.

## Summary

I learnt about how to create, open, close, read and write files, the three standard file descriptors and their `POSIX` names as well as the difference between function and system calls. I practiced using the I/O system calls `open`, `close`, `read`, and `write` and the flags `O_RDONLY`, `WR_ONLY`, and `O_RDW` to create, open, close, read, write, set permissions of files in C.

## Requirements

- Standard libraries are not allowed, except specified. `printf`, `puts`, etc.
- Allowed to use [`_putchar`](https://github.com/alx-tools/_putchar.c/blob/master/_putchar.c): A
C custom function that writes a character to `stdout`, provided by Alx.

## Files

> Each file contains the solution to a task in the project.

- [x] [0-read_textfile.c](https://github.com/Ebube-Ochemba/alx-low_level_programming/blob/master/0x15-file_io/0-read_textfile.c): Reads a text file and prints it to the `POSIX` standard output.
	- The parameter `letters` is the number of letters the function should read and print.
- [x] [1-create_file.c](https://github.com/Ebube-Ochemba/alx-low_level_programming/blob/master/0x15-file_io/1-create_file.c): Creates a file.
	- The paramter `filename` is the name of the file to create.
	- The parameter `text_content` is a null-terminated string to write to the file.
	- If `text_content` is `NULL`, the function creates an empty file.
	- The created file has the permissions `rw-------`.
	- If the file already exists, the existing permissions are not changed.
	- Existing files are truncated.
- [x] [2-append_text_to_file.c](https://github.com/Ebube-Ochemba/alx-low_level_programming/blob/master/0x15-file_io/2-append_text_to_file.c): Appends text at the end of a file.
- [x] [3-cp.c](https://github.com/Ebube-Ochemba/alx-low_level_programming/blob/master/0x15-file_io/3-cp.c): Copies the contents of a file to another file.
	- Usage: `cp file_from file_to`
	- If `file_to already` exists, it is truncated.
	- The created file has the permissions `rw-rw-r--`.
- [ ] [100-elf_header.c](https://github.com/Ebube-Ochemba/alx-low_level_programming/blob/master/0x15-file_io/100-elf_header.c): Displays the information contained in the `ELF` header at the start of an `ELF` file.
	- Usage `elf_header elf_filename`.
	- Displayed information:
		- Magic
		- Class
		- Data
		- Version
		- OS/ABI
		- ABI Version
		- Type
		- Entry point address
		- Format is identical to `readelf -h` (version `2.26.1`).
		- If an error occurs or the file is not an ELF file, the function displays a corresponding error message to `stderr` and exits with a status value of `98`.

> - [main.h](https://github.com/Ebube-Ochemba/alx-low_level_programming/blob/master/0x15-file_io/main.h): A Header file containing prototypes for all functions written in the project.
> - [test_files](https://github.com/Ebube-Ochemba/alx-low_level_programming/tree/master/0x15-file_io/test_files): A folder of test files. Provided by Alx.
