#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: The string.
 *
 * Return: void.
 */

void puts_half(char *str)
{
	int len = 0;
	int idx;

	/** A loop to find the length of the string */
	while (str[len] != '\0')
	{
		len++;
	}

	/** Starting index depending on if len is even/odd */
	if (len % 2 != 0)
	{
		idx = (len / 2) + 1;
	}
	else
	{
		idx = (len / 2);
	}

	/** Print half string */
	while (idx < len)
	{
		_putchar(*(str + idx));
		idx++;
	}
	_putchar('\n');
}
