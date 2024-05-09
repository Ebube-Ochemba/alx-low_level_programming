#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array of integers
 *                        using the Interpolation search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where the value is located, or -1 if not found
 *         or if array is NULL.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos;
	double ratio, difference;

	/* Check if the array is NULL */
	if (!array || !size || !value)
		return (-1);

	/* Perform interpolation search */
	while (low <= high && value >= array[low] && value <= array[high])
	{
		/* Calculate the probe position */
		ratio = (double)(high - low) / (array[high] - array[low]);
		difference = value - array[low];
		pos = low + ratio * difference;

		/* Print the value being checked */
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		/* Value found */
		if (array[pos] == value)
			return (pos);

		/* If value is smaller, move to the left subarray */
		if (array[pos] < value)
			low = pos + 1;
		/* If value is larger, move to the right subarray */
		else
			high = pos - 1;
	}

	/* Value not found */
	printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}
