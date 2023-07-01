#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed
 *             by a new line.
 * @s: The string to be printed.
 *
 * Return: Void.
 */

void print_rev(char *s)
{
	int length = 0;
	int reverse;

	/** A loop to find the length of the string */
	while (*s != '\0')
	{
		length++;
		s++;
	}

	/** To go back to charecter before null charecter */
	s--;

	/** Now, print reverse string */
	for (reverse = length; reverse > 0; reverse--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
