#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers,
 *                followed by a new line.
 * @a: A pointer to the array.
 * @n: The number of elements of the array to be printed.
 *
 * Return: void.
 */

void print_array(int *a, int n)
{
	int idx;

	for (idx = 0; idx < n; idx++)
	{
		printf("%d", a[idx]);

		if (idx == n - 1)
		{
			continue;
		}
		printf(", ");
	}
	printf("\n");
}
