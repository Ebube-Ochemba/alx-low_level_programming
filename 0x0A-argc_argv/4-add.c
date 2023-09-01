#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - adds positive numbers.
 * @argc: Argument count.
 * @argv: Array of pointers to strings.
 *
 * Return: 1 for !isdigit, else 0.
 */

int main(int argc, char *argv[])
{
	int num, digit, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (num = 1; num < argc; num++)
	{
		/* argv is a 2D array, hence... */
		for (digit = 0; argv[num][digit] != '\0'; digit++)
		{
			if (!isdigit(argv[num][digit]))
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	for (num = 1; num < argc; num++)
	{
		sum += atoi(argv[num]);
	}

	printf("%i\n", sum);

	return (0);
}
