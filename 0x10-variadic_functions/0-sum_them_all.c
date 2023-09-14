#include "variadic_functions.h"

/**
 * sum_them_all -  sum of all its parameters.
 * @n: The first parameter.
 *
 * Return: 0 if n == 0, else sum of parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args; /* initialize type for iterating arguments */
	unsigned int idx, sum = 0;

	va_start(args, n); /* initialize argument list */

	sum = 0;
	for (idx = 0; idx < n; idx++)
	{
		/* retrieve argument value and store sum */
		sum += va_arg(args, int);
	}

	va_end(args); /* clean memory */
	return (sum);
}
