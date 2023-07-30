#include "main.h"

/**
 * _isupper - checks for uppercase character.
 * @c: The character to be checked.
 *
 * Return: 1 if lowercase, 0 if uppercase.
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
