#include "main.h"

/**
 * _strcpy - Copies a string pointed to by @src, including
 *           the terminating null byte, to a buffer pointed
 *           to by @dest.
 * @dest: A buffer to copy the string to.
 * @src: The source string to copy.
 *
 * Return: A pointer to the @dest.
 */

char *_strcpy(char *dest, char *src)
{
	int idx;
	int len = 0;

	/** A loop to find the length of the string */
	while (src[len] != '\0')
	{
		len++;
	}

	for (idx = 0; idx <= len; idx++)
	{
		dest[idx] = src[idx];
	}
	return (dest);
}
