#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 *        followed by a new line.(except q and e)
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x;

	for (x = 0; x < 26; x++)
	{
		if ((x == 4 ) || (x == 16))
		{
			continue;
		}
		putchar('a' + x);
	}
	putchar('\n');
	return (0);
}
