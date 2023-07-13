#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: The string to be searched.
 * @c: The character to be searched for.
 *
 * Return: A pointer to the first occurence of the
 *         character if found, else NULL.
 */

char *_strchr(char *s, char c)
{
	int idx = 0;

	/* Loop to find match */
	while (s[idx] != '\0' && s[idx] != c)
	{
		idx++;
	}

	/* condition to assign match or return NULL */
	if (s[idx] == c)
	{
		return (&s[idx]);
	}
	else
	{
		return ('\0');
	}
}
