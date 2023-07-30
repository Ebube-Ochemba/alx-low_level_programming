#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: The name of the string.
 *
 * Return: The length of the string.
 */

int _strlen(char *s)
{
	int length = 0;
	char *ptr = s;

	while (*ptr != '\0')
	{
		length++;
		ptr++;
	}
	return (length);
}
