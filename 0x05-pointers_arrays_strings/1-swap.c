#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: The first Integer variable.
 * @b: The second integer Variable.
 *
 * Return: Void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
