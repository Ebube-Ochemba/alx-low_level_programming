#include "main.h"

/**
 * more_numbers - prints 10 times the numbers,
 *                from 0 to 14, followed by a new line.
 *
 * Return: Always 0 (Success).
 */

void more_numbers(void)
{
	int s, t;

	for (s = 0; s < 10; s++)
	{
		for (t = 0; t < 15; t++)
		{
			if (t >= 10)
			{
				_putchar(t / 10 + '0');
			}
			_putchar(t % 10 + '0');
		}
		_putchar('\n');
	}
}
