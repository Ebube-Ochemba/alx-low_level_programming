#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 *        followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 26; n++)
	{
		putchar('a' + n);
		putchar('\n');
	}
	return (0);
}

