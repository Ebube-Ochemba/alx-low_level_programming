#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9,
 *                      except 2 and 4, followed by a
 *                      new line.
 *
 * Return: Always 0 (success).
 */

void print_most_numbers(void)
{
	int g;

	for (g = 0; g < 10; g++)
	{
		if ((g == 2) || (g == 4))
		{
			continue;
		}
		_putchar(g + '0');
	}
	_putchar('\n');
}
