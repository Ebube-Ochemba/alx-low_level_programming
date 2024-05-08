#include "search_algos.h"

/**
 * binary_search - A function that searches for a value in a sorted array of
 *                 integers using the Binary search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * Return: The index to where the first value is located, else -1.
*/

int binary_search(int *array, size_t size, int value)
{
	size_t idx, mid, left = 0, right = size - 1;

	if (!array || !size || !value)
		return (-1);

	while (left <= right)
	{
		/* Print search range */
		printf("Searching in array: ");
		for (idx = left; idx <= right; idx++)
		{
			printf("%d", array[idx]);
			if (idx < right)
				printf(", ");
		}
		printf("\n");

		/* Set middle */
		mid = left + ((right - left) / 2);

		/* Divide and conquer algo */
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}

	return (-1);
}
