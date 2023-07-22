#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: The number.
 *
 * Return: -1 if n < 0, else factorial of the number.
 */

int factorial(int n)
{
	if (n < 0) /* Base case */
	{
		return (-1);
	}
	else if (n >= 0 && n <= 1) /* Base case */
	{
		return (1);
	}
	else
	{
		/* Non-tail recursive call */
		return (n * factorial(n - 1));
	}
}
