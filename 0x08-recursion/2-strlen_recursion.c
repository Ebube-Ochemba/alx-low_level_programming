#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: A pointer to the string.
 *
 * Return: void.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0') /* Base case */
	{
		return (0);
	}
	else
	{
		/* Non-tail recursive call */
		return (1 + _strlen_recursion(s + 1));
	}
}
