#include "main.h"

/**
 * _puts_recursion - prints a string, followed by
 *                   a new line.
 * @s: A pointer to the string.
 *
 * Return: void.
 */

void _puts_recursion(char *s)
{
	if (*s != '\0') /* Base Case */
	{
		_putchar(*s); /* print char before call */
		_puts_recursion(s + 1); /* recusive call */
	}
	else
	{
		_putchar('\n'); /* new line */
	}
}
