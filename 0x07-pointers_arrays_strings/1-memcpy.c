#include "main.h"

/**
 * _memcpy - Copies a  memory area.
 * @dest: The destination memory area.
 * @src: The source memory block.
 * @n: The number of bytes to be copied.
 *
 * Return: A pointer to the array dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int size = n; /* To only accept possitive integers */
	int idx = 0;

	if (size > 0)
	{
		for (; idx < size; idx++)
		{
			dest[idx] = src[idx];
		}
	}
	return (dest);
}
