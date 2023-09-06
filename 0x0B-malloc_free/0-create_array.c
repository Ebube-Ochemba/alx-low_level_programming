#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes
 *                it with a specific char.
 * @size: The size of the array.
 * @c: The char to initialize the array.
 *
 * Return: NULL is size = 0, else pointer to array.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int idx;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(char) * size);

	if (array == NULL)
	{
		return (NULL);
	}

	for (idx = 0; idx < size; idx++)
	{
		array[idx] = c;
	}

	return (array);
}
