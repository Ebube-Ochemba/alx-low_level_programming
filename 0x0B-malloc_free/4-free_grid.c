#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created by your
 *             alloc_grid function.
 * @grid: A pointer to a 2D array.
 * @height: Array size (rows).
 *
 * Return: void.
 */

void free_grid(int **grid, int height)
{
	int idx;

	if (grid == 0)
	{
		return;
	}

	for (idx = 0; idx < height; idx++)
	{
		free(grid[idx]);
	}

	free(grid);
}
