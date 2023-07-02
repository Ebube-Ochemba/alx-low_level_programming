#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: The string to be reversed.
 *
 * Return: Void.
 */

void rev_string(char *s)
{
	int index;
	char temp;
	int len = 0;

	/** A loop to find the length of the string */
	while (s[len] != '\0')
	{
		len++;
	}

	/** A loop to iterate over the string */
	for (index = 0; index < len / 2; index++)
	{
		temp = s[index];
		s[index] = s[len - index - 1];
		s[len - index - 1] = temp;
	}
}
