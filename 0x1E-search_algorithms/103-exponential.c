#include "search_algos.h"

int bin_sch(int *array, size_t low, size_t high, int value);

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
	size_t bnd = 1;

	/* Check if the array is NULL */
	if (!array || !size || !value)
		return (-1);

	/* Find the range for binary search */
	while (bnd < size && array[bnd] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", bnd, array[bnd]);
		bnd *= 2;
	}

	/* Perform binary search in the found range */
	printf("Value found between indexes [%lu] and [%lu]\n", bnd / 2, bnd - 1);
	return (bin_sch(array, bnd / 2, (bnd < size - 1) ? bnd : size - 1, value));
}


/**
 * bin_sch - Searches for a value in a sorted array of integers
 *                 using the Binary search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @low: The lowest index of the subarray.
 * @high: The highest index of the subarray.
 * @value: The value to search for.
 *
 * Return: The index where the value is located, or -1 if not found.
 */
int bin_sch(int *array, size_t low, size_t high, int value)
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
