#include "main.h"

/**
 * check_prime - checks if a number > 2 is a prime number.
 * @num: The number to be checked
 * @div: A divisor > 2 but < half of num, used to check further.
 *
 * Return: 1 if n is a prime number, else 0.
 */

int check_prime(int num, int div)
{
	if (num % div == 0) /* Base case */
	{
		return (0);
	}
	else if (div >= num / 2) /* set limit of x */
	{
		return (1);
	}
	/* increment x by 1 after each recursive call */
	return (check_prime(num, div + 1));
}

/**
 * is_prime_number - Checks if a number is a prime number.
 * @n: The number to be checked.
 *
 * Return: 1 if n is a prime number, else 0.
 */

int is_prime_number(int n)
{
	if (n <= 1) /* Base case */
	{
		return (0);
	}
	else if (n == 2) /* Base case for #2 */
	{
		return (1);
	}
	return (check_prime(n, 2)); /* function call */
}
