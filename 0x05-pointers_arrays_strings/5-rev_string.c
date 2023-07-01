#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: The string to be reversed.
 *
 * Return: Void.
 */

void rev_string(char *s)
{
	int a, temp;
	int len = 0;

	/** A loop to find the length of the string */
	while (s[len] != '\0')
	{
		len++;
	}

	/** A loop to iterate over the string */
	for (a = 0; a < len / 2; a++)
	{
		temp = s[a];
		s[a] = s[len - a - 1];
		s[len - a - 1] = temp;
	}
}
