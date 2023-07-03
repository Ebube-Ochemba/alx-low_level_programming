#include "main.h"

/**
 * puts2 - prints every other character of a string,
 *         starting with the first character,
 *         followed by a new line.
 * @str: The string containing characters.
 *
 * Return: Void.
 */

void puts2(char *str)
{
	int index;
	int len = 0;

	/** A loop to find the length of the string */
	while (str[len] != '\0')
	{
		len++;
	}

	/** Loop to print */
	for (index = 0; index < len; index += 2)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
