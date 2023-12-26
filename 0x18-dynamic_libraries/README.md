# C - Dynamic libraries

> This project was an introduction to Dynamic libraries in C.

## Summary

I learnt about dynamic libraries, how they work, how to create and use them, the differences between static and dynamic (shared) libraries. Also, the environment variable `$LD_LIBRARY_PATH` and how to use it and how to use `nm`, `ldd`, `ldconfig`.

## Requirements

- Standard libraries are not allowed, except specified. `printf`, `puts`, etc.
- Allowed to use [`_putchar`](https://github.com/alx-tools/_putchar.c/blob/master/_putchar.c): A
C custom function that writes a character to `stdout`, provided by Alx.

## Files

> Each file contains the solution to a task in the project.

- [x] [libdynamic.so](https://github.com/Ebube-Ochemba/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libdynamic.so): A Dynamic library containing all the functions used in this task.
- [x] [1-create_dynamic_lib.sh](https://github.com/Ebube-Ochemba/alx-low_level_programming/blob/master/0x18-dynamic_libraries/1-create_dynamic_lib.sh): A Bash script that creates a dynamic library called `liball.so` from all the`.c` files in the current directory.
- [x] [main.h](https://github.com/Ebube-Ochemba/alx-low_level_programming/blob/master/0x18-dynamic_libraries/main.h): A Header file containing prototypes for all functions used in the [libdynamic.so](https://github.com/Ebube-Ochemba/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libdynamic.so) task.
- [x] [100-operations.so](https://github.com/Ebube-Ochemba/alx-low_level_programming/blob/master/0x18-dynamic_libraries/100-operations.so): A dynamic library that contains C functions that can be called from Python.
- [ ] [101-make_me_win.sh](https://github.com/Ebube-Ochemba/alx-low_level_programming/blob/master/0x18-dynamic_libraries/101-make_me_win.sh): update...

> - [test_files](https://github.com/Ebube-Ochemba/alx-low_level_programming/tree/master/0x18-dynamic_libraries/test_files): A folder of test files. Provided by Alx.
> - [functions](https://github.com/Ebube-Ochemba/alx-low_level_programming/tree/master/0x18-dynamic_libraries/functions): A folder of functions for the [libdynamic.so](https://github.com/Ebube-Ochemba/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libdynamic.so) task.
> - [ops](https://github.com/Ebube-Ochemba/alx-low_level_programming/tree/master/0x18-dynamic_libraries/ops): A folder of functions for the [100-operations.so](https://github.com/Ebube-Ochemba/alx-low_level_programming/blob/master/0x18-dynamic_libraries/100-operations.so) task.
