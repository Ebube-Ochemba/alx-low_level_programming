#include "search_algos.h"

/**
 * jump_search - A function that searches for a value in a sorted array of
 *               integers using the Jump search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * Return: The index to where the first value is located, else -1.
 */

int jump_search(int *array, size_t size, int value)
{
	size_t prev, step;

	if (!array || !size || !value)
		return (-1);

	/* Calculate the jump step size */
	step = (size_t)sqrt(size);

	/* The Big Stepper: Find the block where the value may be located */
	for (prev = 0; prev < size && array[prev] < value; prev += step)
	{
		/* Print the value checked at each step */
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	}

	/* Print the range where the value may be located */
	printf("Value found between indexes [%lu] and [%lu]\n", prev - step, prev);

	/* The (Linear) Search within the identified block */
	for (prev = prev - step; prev < size && prev <= prev + step; prev++)
	{
		/* Print the value checked at each step */
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);

		/* Check if the value is found */
		if (array[prev] == value)
			return ((int) prev);
	}

	/* Value not found */
	return (-1);
}
