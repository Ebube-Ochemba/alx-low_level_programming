#include <stdio.h>

void __attribute__ ((constructor)) premain(void);


/**
 * premain - executes this function before main function.
 * Return: void.
 */

void premain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
