#include "main.h"

/**
 * _strcat - appends the src string to the dest string,
 *           overwriting the terminating null byte (\0)
 *           at the end of dest, and then adds a
 *           terminating null byte.
 *
 * @src: The source string.
 * @dest: The destination string.
 *
 * Return: a pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	int didx = 0;
	int sidx = 0;

	/** A loop to put pointer at string end */
	while (dest[didx] != '\0')
	{
		didx++;
	}

	while (src[sidx] != '\0')
	{
		dest[didx] = src[sidx];
		didx++;
		sidx++;
	}
	dest[didx] = '\0';

	return (dest);
}
