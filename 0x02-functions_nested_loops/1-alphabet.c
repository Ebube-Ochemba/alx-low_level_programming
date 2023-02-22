#include "main.h"

/**
 * print_alphabet - The alphabet game
 *
 * Return: void
 */

void print_alphabet(void)

{
	char c;
	
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
