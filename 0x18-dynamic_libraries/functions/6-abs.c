#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @n: The inteeger to be checked.
 *
 * Return: Always 0 (Success)
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	return (0);
}
