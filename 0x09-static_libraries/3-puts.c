#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: The string to be printed.
 *
 * Return: Void.
 */

void _puts(char *str)
{
	char *string = str;

	while (*string != '\0')
	{
		_putchar(*string);
		string++;
	}
	_putchar('\n');
}
