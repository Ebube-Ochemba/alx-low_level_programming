#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: Argument count.
 * @av: Argument pointers.
 *
 * Return: Null if ac == 0 or av == NULL, else pointer to char.
 */

char *argstostr(int ac, char **av)
{
	int idx, idy, pos = 0, len = 0;
	char *array;

	if (ac == 0 || av == NULL) /* check ac & av*/
	{
		return (NULL);
	}

	for (idx = 0; idx < ac; idx++) /* iterate av */
	{
		idy = 0;
		while (av[idx][idy] != '\0') /* av is a 2D array */
		{
			len++;
			idy++;
		}
		len++; /* newline char */
	}

	array = malloc(len + 1); /* allocate memory */

	if (array == NULL) /* check malloc */
	{
		return (NULL);
	}

	for (idx = 0; idx < ac; idx++) /* iterate arguments */
	{
		for (idy = 0; av[idx][idy] != '\0'; idy++) /* each argument*/
		{
			array[pos] = av[idx][idy]; /* copy argument */
			pos++; /* shift pointer after NULL char */
		}
		array[pos] = '\n'; /* add newline char between arguments */
		pos++; /* update pointer position*/
	}
	array[len] = '\0'; /* insert NULL terminator */

	return (array);
}
