#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: The minimum value.
 * @max: The maximum value.
 *
 * Return: Pointer to array, else NULL.
 */

int *array_range(int min, int max)
{
	int idx, idy, size = 0;
	int *array;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;
	array = malloc(sizeof(int) * size);

	if (array == NULL)
	{
		return (NULL);
	}

	for (idx = 0, idy = min; idx < size && idy <= max; idx++, idy++)
	{
		array[idx] = idy;
	}

	return (array);
}
