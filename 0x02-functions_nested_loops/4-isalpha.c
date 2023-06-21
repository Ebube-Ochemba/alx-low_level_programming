#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 * @c: The charecter to be checked.
 *
 * Return: 1 if lowercase, 0 if uppercase.
 */

int _isalpha(int c)
{
	if (((c >= 'A' && c <= 'Z') && (c >= 'a' && c <= 'z')))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
