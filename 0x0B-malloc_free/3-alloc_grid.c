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

	array = malloc(sizeof(int *) * height); /* allocate rows */

	if (array == NULL) /* check malloc for rows */
	{
		return (NULL);
	}

	for (idx = 0; idx < height; idx++) /* iterate rows */
	{
		array[idx] = malloc(sizeof(int) * width); /* allocate columns */

		if (array[idx] == NULL) /* check malloc for columns */
		{
			for (idy = 0; idy < idx; idy++) /* iterate columns */
			{
				free(array[idy]); /* free memory if malloc fails */
			}
			free(array); /* free memory if malloc fails */
			return (NULL);
		}
	}

	return (array);
}
