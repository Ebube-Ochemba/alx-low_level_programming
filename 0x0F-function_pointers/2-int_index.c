#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: The array to search.
 * @size: The number of elements in the array.
 * @cmp: Apointer to the function to be used to compare values.
 *
 * Return: -1 if no match, else an integer.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int idx;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0) /* check size */
		return (-1);

	for (idx = 0; idx < size; idx++)
	{
		if (cmp(array[idx])) /* check if cmp return 0 */
		{
			return (idx);
		}
	}

	return (-1); /* return -1 if no match */
}
