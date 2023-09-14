#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: A string to be printed between numbers.
 * @n: The number of integers passed to the function.
 *
 * Return: Void.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args ; /* initialize type for iterating arguments */
	unsigned int idx, check;
	const char *spr;

	va_start(args, n); /* initialize argument list */

	spr = (separator == NULL) ? "" : separator; /* check separator*/

	for (idx = 0; idx < n; idx++) /* iterate parameters */
	{
		/* retrieve argument value and store & print format */
		check = va_arg(args, int);
		printf("%d", check);

		if (idx < n - 1) /* check for last int */
		{
			printf("%s", spr);
		}
	}

	va_end(args); /* clean memory */
	printf("\n");
}
