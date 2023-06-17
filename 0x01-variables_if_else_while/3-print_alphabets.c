#include <stdio.h>

/**
 * main -  prints the alphabet in lowercase, and then in
 *         uppercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	int y;

	for (x = 0; x < 26; x++)
	{
		putchar('a' + x);
	}
	for (y = 0; y < 26; y++)
	{
		putchar('A' + y);
	}
	putchar('\n');
	return (0);
}
