#include "main.h"

/**
 * main - prints the alphabet, in lowercase,
 *        followed by a new line.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int a;

	for (a = 0; a < 26; a++)
	{
		_putchar(a + 97);
	}
	_putchar('\n');
}
