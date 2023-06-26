#include <stdio.h>

/**
 * main - Fizz, Buzz & FizzBuzz ;).
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
			printf("FizzBuzz ");
		}
		else if  (az % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (az % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", az);
		}
	}
	printf("\n");
	return (0);
}
