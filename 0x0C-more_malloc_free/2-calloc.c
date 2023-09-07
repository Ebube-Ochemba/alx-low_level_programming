#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: The number of elements.
 * @size: The size of the array.
 *
 * Return: pointer to array, else NULL.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array; /* initialize void pointer */

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}

	array = calloc(nmemb, size);

	if (array == NULL) /* check calloc */
	{
		return (NULL);
	}

	return (array);
}
