#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char x;
	char y;

	for (x = 0; x < 10; x++)
	{
		putchar('0' + x);
	}
	for (y = 0; y < 6; y++)
	{
		putchar('a' + y);
	}
	putchar('\n');
	return (0);
}
