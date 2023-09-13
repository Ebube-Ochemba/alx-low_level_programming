#include "3-calc.h"

/**
 * get_op_func - Selects the correct function to perform
 *               the operation asked by the user.
 * @s: The operator passed as argument to the program.
 *
 * Return: A pointer to the function that corresponds to
 *         the operator passed to the program.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i;

	i = 0;

	while (ops[i].op != NULL) /* iterate struct op (op_t) */
	{
		if (strcmp(ops[i].op, s) == 0) /* comapre current index to s */
		{
			return (ops[i].f); /* return matched index */
		}
		i++;
	}

	return (NULL);
}
