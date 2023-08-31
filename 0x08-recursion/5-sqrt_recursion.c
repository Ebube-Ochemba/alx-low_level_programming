#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: An in to calculate its square root.
 *
 * Return: -1 if square root is unnatural,
 *         else returns square root.
 */

int find_sqrt(int num, int root);

int _sqrt_recursion(int n)
{
	if (n < 0) /* base case */
	{
		return (-1);
	}

	return (find_sqrt(n, 0));
}

/**
 * find_sqrt - starts from 0 to fint the squareroot of n.
 * @num: Integer to be passed.
 * @root: Test toot.
 *
 * Return: Squareroot if natural, -1 if not.
 */

int find_sqrt(int num, int root)
{
	if ((root * root) > num) /* sqrt of a num can't be > root^2 */
	{
		return (-1);
	}
	else if ((root * root) == num)
	{
		return (root);
	}
	else
	{
		return (find_sqrt(num, root + 1)); /* direct recursion */
	}
}
