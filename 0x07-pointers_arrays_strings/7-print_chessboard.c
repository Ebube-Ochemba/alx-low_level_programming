#include "main.h"

/**
 * print_chessboard - Prints a chessboard.
 * @a: 2D array chessboard to be printed.
 *
 * Return: Void.
 */

void print_chessboard(char (*a)[8])
{
	int rows;
	int columns;

	for (rows = 0; rows < 8; rows++)
	{
		for (columns = 0; columns < 8; columns++)
		{
			_putchar(a[rows][columns]);
		}
		_putchar('\n');
	}
}
