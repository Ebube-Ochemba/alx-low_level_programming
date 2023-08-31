#include "main.h"

/**
 * check_prime - x
 * @num: Int to be checked
 * @div: The divisor
 *
 * Return: 1 if prime, else 0.
 */

int check_prime(int num, int div)
{
	if (num % div == 0) /* if there no remainder, it's not prime */
	{
		return (0);
	}
	else if (div == num / 2) /* any div > num/2 will give a remainder */
	{
		return (1);
	}
	else
	{
		return (check_prime(num, div + 1)); /* direct recursion */
	}
}

/**
 * is_prime_number - checks if a number is a prime number.
 * @n: number to be checked.
 *
 * Return: 1 for prime number, else 0.
 */

int is_prime_number(int n)
{
	if (n < 2) /* base case */
	{
		return (0);
	}
	else if (n == 2 || n == 3) /* base case */
	{
		return (1);
	}
	else
	{
		return (check_prime(n, 2));
	}
}
