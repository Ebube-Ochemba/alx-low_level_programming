#include "main.h"

/**
 * find_sqrt - find square root of num, starting from 0.
 * @num: The number to find it's square root.
 * @root: The root to be tested.
 *
 * Return: If natural square root - the square root,
 *         else, -1.
 */

int find_sqrt(int num, int root)
{
	if ((root * root) > num) /* unnatural root */
	{
		return (-1);
	}
	if (root * root == num) /* Found match */
	{
		return (root);
	}
	/* increment test root by 1 after each recursive call */
	return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - returns the natural square root
 *                   of a number.
 * @n: The number.
 *
 * Return: -1 if n doesn't have a natural square root.
 */

int _sqrt_recursion(int n)
{
	if (n < 0) /* Base case */
	{
		return (-1);
	}
	if (n == 1) /* Base case */
	{
		return (1);
	}
	return (find_sqrt(n, 0)); /* function call */
}
