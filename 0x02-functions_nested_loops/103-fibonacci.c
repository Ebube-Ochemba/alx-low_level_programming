#include <stdio.h>
/**
  * main - Sum even fibonacci numbers under 4 million.
  * Return: Nothing.
  */
int main(void)
{
	unsigned long count, f, s, fib, sum;

	f = 0;
	s = 1;
	sum = 0;

	for (count = 0; count < 50; count++)
	{
		fib = f + s;
		f = s;
		s = fib;

		if (fib % 2 == 0 && fib < 4000000)
		{
			sum += fib;
		}
	}
	printf("%lu\n", sum);
	return (0);
}
