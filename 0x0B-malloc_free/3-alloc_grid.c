#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: The number of Columns.
 * @height: The number of Rows.
 *
 * Return: NULL if failed, else Pointer to 2D array.
 */

int **alloc_grid(int width, int height)
{
	int idx, idy;
	int **array;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(int *) * height);

	if (array == NULL)
	{
		return (NULL);
	}

	for (idx = 0; idx < height; idx++)
	{
		array[idx] = malloc(sizeof(int) * width);

		if (array[idx] == NULL)
		{
			for (idy = 0; idy < idx; idy++)
			{
				free(array[idy]);
			}
			free(array);
			return (NULL);
		}
	}

	return (array);
}
