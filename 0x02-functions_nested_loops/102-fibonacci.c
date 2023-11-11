#include <stdio.h>
/**
  * main - print the first 50 fibonacci numbers.
  * Return: Nothing.
  */
int main(void)
{
	unsigned long count, f, s, fib;

	f = 0;
	s = 1;
	for (count = 0; count < 50; count++)
	{
		fib = f + s;
		f = s;
		s = fib;
		printf("%lu", fib);
		if (count == 49)
			putchar('\n');
		else
		{
			printf(", ");
		}
	}
	return (0);
}
