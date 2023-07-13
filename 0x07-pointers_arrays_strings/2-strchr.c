#include "main.h"
#define NULL 0

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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
