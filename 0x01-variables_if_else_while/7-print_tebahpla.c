#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 25; x >= 0; x--)
	{
		putchar('a' + x);
	}
	putchar('\n');
	return (0);
}
