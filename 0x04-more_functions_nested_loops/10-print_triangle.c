#include "main.h"

/**
 * print_triangle - prints a triangle, followed
 *                  by a new line.
 * @size: The size of the triangle.
 *
 * Return: Always 0 (SUccess)
 */

void print_triangle(int size)
{
	int x, y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			for (y = size - 1; y >= 0; y--)
			{
				if (y > x)
				{
					_putchar(' ');
				}
				else
				{
				_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
}
