#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_char - prints char only.
 * @args: args
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - prints int only.
 * @args: args.
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - prints float only.
 * @args: args.
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - prints string only.
 * @args: args
 */
void print_string(va_list args)
{
	char *str;

	str = va_arg(args, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - prints anything.
 * @format: array chars of types of arguments passed to the function.
 *
 * Return: Void.
 */

void print_all(const char * const format, ...)
{
	va_list args; /* initialize type for iterating arguments */
	int idx, idy = 0;
	char *sep = "";

	/* structure to define data types */
	datatype type[] = { {'c', print_char},
			      {'i', print_int},
			      {'f', print_float},
			      {'s', print_string},
			      {'\0', NULL} };

	/* iterate format; if datatype is matched, access function via struct */
	va_start(args, format);

	/* iterate format */
	while (format != NULL && format[idy] != '\0')
	{
		idx = 0;
		while (type[idx].letter != '\0') /* iterate type */
		{
			if (type[idx].letter == format[idy]) /* check format */
			{
				printf("%s", sep);
				type[idx].f(args); /* Call va_arg correctly */
				sep = ", ";
			}
			idx++;
		}
		idy++;
	}
	va_end(args);
	printf("\n");
}
