#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: The string to print.
 *
 * Return: Void.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0') /* base case */
	{
		_putchar('\n');
		return;
	}

	_putchar(*s); /* Print char */
	s++; /* move pointer */
	_puts_recursion(s); /* recursice call for next char */
}
