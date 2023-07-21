#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: A pointer to the string.
 *
 * Return: void.
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0') /* Base Case */
	{
		_print_rev_recursion(s + 1); /* recusive call */
		_putchar(*s); /* print char after call */
	}
}
