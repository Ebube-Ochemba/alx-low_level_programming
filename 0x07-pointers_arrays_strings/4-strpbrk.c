#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - finds the first occurrence of the string
 * @s: The string to be searched
 * @accept: Input
 *
 * Return: Always 0 (Succes)
 */
char *_strpbrk(char *s, char *accept)
{
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
				return (s + i);
		}
	}

		return (NULL);
}
