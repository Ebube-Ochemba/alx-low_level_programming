#include <stdio.h>

/**
 * main - prints all possible different
 *        combinations of three digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, y, z;
	int count = 0;

	for (x = '0'; x <= '7'; x++)
	{
		for (y = x + 1; y <= '8'; y++)
		{
			for (z = y + 1; z <= '9'; z++)
			{
				putchar(x);
				putchar(y);
				putchar(z);
				if ((x == 7) && (y == 8) && (z == 9))
				{
					continue;
				}
				else if (count < 119)
				{
					putchar(',');
					putchar(' ');
				}
				else
				{
					putchar('\n');
				}
				count++;
			}
		}
	}
	return (0);
}
