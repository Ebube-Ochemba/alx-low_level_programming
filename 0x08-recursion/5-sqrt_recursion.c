#include <stdio.h>
#include "main.h"

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: Number to calculate it's square root
 *
 * Return: The natural square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - Calculate natural square root
 * @n: Number to calculate it's square root
 * @i: iterate number
 *
 * Return: The natural square root
 */
int _sqrt(int n, int i)
{
	int sqrt = 1 * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);

	return (_sqrt(n, i + 1));
}
