#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: A pointer to a string.
 *
 * Return: NULL if str is NULL, else a pointer to a duplicate string.
 */

char *_strdup(char *str)
{
	int idx, len = 0;
	char *array;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}

	array = malloc(sizeof(char) * len + 1);

	if (array == NULL)
	{
		return (NULL);
	}

	for (idx = 0; idx < len + 1; idx++)
	{
		array[idx] = str[idx];
	}
	array[len] = '\0';

	return (array);
}
