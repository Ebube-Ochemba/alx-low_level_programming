#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: The number to return its factorial.
 *
 * Return: if n < 0 return -1,
 *         else returns factorial of number.
 */

int factorial(int n)
{
	if (n < 0) /* base case */
	{
		return (-1);
	}
	else if (n == 0 || n == 1) /* base case */
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
