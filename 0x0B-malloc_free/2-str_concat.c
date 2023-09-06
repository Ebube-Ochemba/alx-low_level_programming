#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * str_concat -  concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: NULL for empty strings, else Pointer to new string.
 */

char *str_concat(char *s1, char *s2)
{
	int idx, idy, len1 = 0, len2 = 0;
	char *array;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}

	array = malloc(sizeof(char) * (len1 + len2 + 1));

	if (array == NULL)
	{
		return (NULL);
	}

	for (idx = 0; idx < len1; idx++)
	{
		array[idx] = s1[idx];
	}
	for (idx = len1, idy = 0; idx < len1 + len2; idx++, idy++)
	{
		array[idx] = s2[idy];
	}
	array[len1 + len2] = '\0';

	return (array);
}
