#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be converted.
 *
 * Return: void.
 */

void print_binary(unsigned long int n)
{
	unsigned long int bit;

	if (n == 0) /* special case */
	{
		_putchar('0');
		return;
	}
	else if (n == 1) /* special case */
	{
		_putchar('1');
		return;
	}

	bit = 1;

	while (bit <= (n / 2)) /* shift bit to left till its > n/2, ULONG_MAX */
	{
		bit = bit << 1; /* bit = bit * 2 */
	}
	bit = bit >> 1; /* shift bit one position to the right */

	while (bit > 0)
	{
		if (n & bit) /* if current bit in n is set */
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		bit = bit >> 1; /* bit = bit / 2 */
	}
}
