#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into it.
 * @argc: Argument count.
 * @argv: Array of pointers to strings.
 *
 * Return: Always 0 (Success).
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
	{
		printf("%i\n", argc - 1);
	}

	return (0);
}
