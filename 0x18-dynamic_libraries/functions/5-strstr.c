#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: The string to be searched.
 * @needle: The substring.
 *
 * Return: If there is a match - a pointer to the matched byte.
 *         If no match - NULL.
 */

char *_strstr(char *haystack, char *needle)
{
	int idx = 0, jdx;

	/* iterate through haystack */
	while (haystack[idx] != '\0')
	{
		jdx = 0;

		/* Check for substring match */
		while (needle[jdx] != '\0' && haystack[idx + jdx] == needle[jdx])
		{
			jdx++;
		}

		/* if fully matched, return pointer to matched byte */
		if (needle[jdx] == '\0')
		{
			return (haystack + idx);
		}

		idx++;
	}
	/* return NULL if no matches */
	return ('\0');
}
