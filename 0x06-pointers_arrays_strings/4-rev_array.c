#include "main.h"

/**
 * reverse_array - reverses the content of an array of
 *                 integers.
 * @a: The array of integers to be reversed.
 * @n: The number of elements of the array.
 *
 * Return: void.
 */

void reverse_array(int *a, int n)
{
	int idx;
	int tmp;

	/** A loop to iterate over the string */
	for (idx = 0; idx < n / 2; idx++)
	{
		tmp = a[idx];
		a[idx] = a[n - idx - 1];
		a[n - idx - 1] = tmp;
	}
}
