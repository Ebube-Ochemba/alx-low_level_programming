#include "3-calc.h"

/**
 * main - check the code.
 * @argc: The number of arguments.
 * @argv: A 2D array of arguments.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	char opr;
	int (*calc)(int, int);

	if (argc != 4) /* check argc */
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]); /* store integer */
	num2 = atoi(argv[3]); /* store integer */

	calc = get_op_func(argv[2]); /* get opereator */

	if (calc == NULL) /* check operator */
	{
		printf("Error\n");
		exit(99);
	}

	opr = *argv[2]; /* store operator */

	/* Avoid invalid calculation */
	if ((opr == '/' || opr == '%') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	result = calc(num1, num2); /* store calculation */
	printf("%d\n", result);

	return (0);
}
