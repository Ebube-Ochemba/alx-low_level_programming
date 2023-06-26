#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9,
 *                 followed by a new line.
 *
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	int g;

	for (g = 0; g < 10; g++)
	{
		_putchar('0' + g);
	}
	_putchar('\n');
}
