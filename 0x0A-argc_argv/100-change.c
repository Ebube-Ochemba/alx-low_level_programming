#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - prints the minimum number of coins to make change
 *        for an amount of money.
 * @argc: Argument count.
 * @argv: Array of pointers to strings.
 *
 * Return: Always 0 (Success).
 */

int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]); /* convert string to intiger */

	coins += cents / 25; /* calculate quarters */
	cents = cents % 25;

	coins += cents / 10; /* calculate dimes */
	cents = cents % 10;

	coins += cents / 5; /* calculate nickels */
	cents = cents % 5;

	coins += cents / 2; /* calculate ... */
	cents = cents % 2;

	coins += cents / 1; /* calculate pennies */

	printf("%i\n", coins);

	return (0);
}
