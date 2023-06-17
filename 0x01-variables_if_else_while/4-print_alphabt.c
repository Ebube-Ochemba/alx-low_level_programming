#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 *        followed by a new line.(except q and e)
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 0; x < 26; x++)
	{
		if (x != 'e' && x != 'q')
		{
			putchar('a' + x);
		}
	}
	putchar('\n');
	return (0);
}
