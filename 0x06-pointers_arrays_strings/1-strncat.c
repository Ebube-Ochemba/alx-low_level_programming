#include "main.h"

/**
 * _strncat - concatenate n bytes to destination string.
 * @src: The string to append.
 * @dest: The string to be appended to.
 * @n: The number of bytes from src to be appended to dest.
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	/* make i index of null terminator */
	while (dest[i] != '\0')
	{
		i++;
	}

	/* append and replace the null terminator */
	while (src[j] != src[n])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
