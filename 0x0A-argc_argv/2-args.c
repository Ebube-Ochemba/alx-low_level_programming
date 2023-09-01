#include <stdio.h>
#include "main.h"

/**
 * main - all arguments it receives.
 * @argc: Argument count.
 * @argv: Array of pointers to strings.
 *
 * Return: Always 0 (Success).
 */

int main(int argc, char *argv[])
{
	int idx;
	if (argc > 0)
	{
		for (idx = 0; idx < argc; idx++)
		{
			printf("%s\n", argv[idx]);
		}
	}

	return (0);
}
