#include "search_algos.h"

int bin_search(int *array, size_t low, size_t high, int value);

/**
 * exponential_search - Searches for a value in a sorted array of integers
 *                      using the Exponential search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where the value is located, or -1 if not found
 *         or if array is NULL.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bnd = 0, high;

	/* Check if the array is NULL */
	if (!array || !size || !value)
		return (-1);

	if (array[bnd] != value)
	{
		/* Find the range for binary search */
		for (bnd = 1; bnd < size && array[bnd] <= value; bnd *= 2)
			printf("Value checked array[%lu] = [%d]\n", bnd, array[bnd]);
	}

	high = (bnd < size - 1) ? bnd : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", bnd / 2, high);

	/* Perform binary search in the found range */
	return (bin_search(array, bnd / 2, high, value));
}


/**
 * bin_search - Searches for a value in a sorted array of integers
 *                 using the Binary search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @low: The lowest index of the subarray.
 * @high: The highest index of the subarray.
 * @value: The value to search for.
 *
 * Return: The index where the value is located, or -1 if not found.
 */
int bin_search(int *array, size_t low, size_t high, int value)
{
	size_t idx, mid;

	while (low <= high)
	{
		printf("Searching in array: ");
		for (idx = low; idx <= high; idx++)
		{
			printf("%d", array[idx]);
			if (idx < high)
				printf(", ");
		}
		printf("\n");

		mid = (low + high) / 2;

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return (-1);
}
