#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: An int
 * @y: The power to raise the int to
 *
 * Return: if y < 0, -1,
 *         else returns value of reuslt.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0) /* base case */
	{
		return (-1);
	}
	else if (x == 0) /* base case */
	{
		return (0);
	}
	else if (x == 1 || y == 0) /* base case */
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
