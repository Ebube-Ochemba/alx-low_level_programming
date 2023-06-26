#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: The number of times to the \ char will be printed.
 *
 * Return: Always 0 (Success).
 */

void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
