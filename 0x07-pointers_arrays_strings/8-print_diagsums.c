#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sums of diagonals in matrix.
 * @a: The matrix of integers.
 * @size: The size of the matrix.
 *
 * Return: Void.
 */

void print_diagsums(int *a, int size)
{
	int idx, sum1 = 0, sum2 = 0;

	for (idx = 0; idx < size; idx++)
	{
		sum1 += a[idx];
		a += size;
	}

	a -= size;

	for (idx = 0; idx < size; idx++)
	{
		sum2 += a[idx];
		a -= size;
	}

	printf("%d, %d\n", sum1, sum2);
}
