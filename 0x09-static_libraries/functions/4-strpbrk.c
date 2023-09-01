#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: The string to be searched.
 * @accept: The set of bytes to be searched for.
 *
 * Return: If a set is matched - a pointer to the matched byte.
 *         If no set is matched - NULL.
 */

char *_strpbrk(char *s, char *accept)
{
	int idx = 0, jdx;

	/* iterate through string */
	while (s[idx] != '\0')
	{
		/* iterate through prefix */
		for (jdx = 0; accept[jdx] != '\0'; jdx++)
		{
			/* stop at first occurence */
			if (s[idx] == accept[jdx])
			{
				/* set pointer to first occurence */
				s = &s[idx];
				return (s);
			}
		}
		idx++;
	}
	/* return NULL if no matches */
	return ('\0');
}
