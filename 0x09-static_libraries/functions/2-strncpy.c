#include "main.h"

/**
 * _strncpy - copies n bytes of a source into buffer
 *            of a destination string.
 * @src: The source string.
 * @dest: The buffer storing the string copy.
 * @n: The maximum number of bytes to copied from src.
 *
 * Return: a pointer to the resulting string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int idx;

	for (idx = 0; idx < n && src[idx] != '\0'; idx++)
		dest[idx] = src[idx];
	while (idx < n)
	{
		dest[idx] = '\0';
		idx++;
	}

	return (dest);
}
