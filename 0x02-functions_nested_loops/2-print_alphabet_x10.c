#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in
 *                      lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char alpha, count;

	for (count = 0; count < 10; count++)
	{
		for (alpha = 0; alpha < 26; alpha++)
		{
			_putchar(alpha + 97);
		}
		_putchar('\n');
	}
}
