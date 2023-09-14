#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: The string to be printed between the strings.
 * @n: The number of strings passed to the function.
 *
 * Return: Void.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args; /* initialize type for iterating arguments */
	unsigned int idx;
	const char *spr;
	char *check;

	va_start(args, n); /* initialize argument list */

	spr = (separator == NULL) ? "" : separator; /* check separator */

	for (idx = 0; idx < n; idx++) /* iterate parameters */
	{
		/* retrieve argument value, store & print format */
		check = va_arg(args, char*);

		/* check string */
		check = (check == NULL) ? "(nil)" : check;

		printf("%s", check);

		if (idx < n - 1) /* check for last char */
		{
			printf("%s", spr); /* check for last string */
		}
	}
	va_end(args); /* clean memory */
	printf("\n");
}
