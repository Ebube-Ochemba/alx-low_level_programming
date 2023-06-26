#include <stdio.h>

/**
 * main - print 1 to 100,
 *        multiples of 3 with Fizz,
 *        multiples of 5 with Buzz,
 *        and and multiple of both 3 and 5 with FizzBuzz.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	int az;

	for (az = 1; az <= 100; az++)
	{
		if ((az % 3 == 0) && (az % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if  (az % 3 == 0)
		{
			printf("Fizz");
		}
		else if (az % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", az);
		}
		if (az < 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
