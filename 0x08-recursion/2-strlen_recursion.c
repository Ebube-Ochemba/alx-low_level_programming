#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: An int == the string length.
 */

int _strlen_recursion(char *s)
{
	int len = 1; /* count first char */

	if (*s == '\0') /* base case */
	{
		return 0;
	}

	s++; /* move pointer */
	len += _strlen_recursion(s); /* update len & make recursive call */

	return (len);
}
