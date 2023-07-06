#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a
 *                  string to uppercase.
 * @str: The string to be modified.
 *
 * Return: A pointer to the modified string.
 */

char *string_toupper(char *str)
{
	int idx = 0;

	while (str[idx] != '\0')
	{
		if ((str[idx] >= 'a') && (str[idx] <= 'z'))
		{
			str[idx] = str[idx] - 32;
		}
		idx++;
	}
	return (str);
}
