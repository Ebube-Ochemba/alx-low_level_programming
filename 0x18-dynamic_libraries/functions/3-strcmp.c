#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: A pointer to the first string to be compared.
 * @s2: A pointer to the second string to be compared.
 *
 * Return: int that tells num spaces in between
 */

int _strcmp(char *s1, char *s2)
{
	/* Make sure not at end of string */
	while ((*s1 != '\0') || (*s2 != '\0'))
	{
		/* if elements a different, return the difference */
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		/* loop index */
		s1++;
		s2++;
	}
	return (0);
}
