#include "search_algos.h"

/**
 * linear_search - A function that searches for a value in an array of integers
 *                 using the Linear search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * Return: The index to where the first value is located, else -1.
*/

int linear_search(int *array, size_t size, int value)
{
	size_t idx;

	if (!array || !size || !value)
		return (-1);

	for (idx = 0; idx < size; idx++)
	{
		printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
			return (idx);
	}
	return (-1);
}
