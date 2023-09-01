#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - multiplies two numbers.
 * @argc: Argument count.
 * @argv: Array of pointers to strings.
 *
 * Return: Always 0 (Success).
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
	}
	else
	{
		printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	}

	return (0);
}

