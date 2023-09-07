#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes of s2 to concaternate.
 *
 * Return: Null if fails, else pointer to string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int idx, idy, len1 = 0, len2 = 0, len = 0;
	char *string;

	s1 = (s1 == NULL) ? "" : s1; /* handle NULL input */
	s2 = (s2 == NULL) ? "" : s2; /* handle NULL input */

	while (s1[len1] != '\0') /* get string length */
	{
		len1++;
	}
	while (s2[len2] != '\0') /* get string length */
	{
		len2++;
	}

	len =  (n >= len2) ? len2 : n; /* compare bytes */

	string = malloc(sizeof(char) * (len1 + len + 1));

	for (idx = 0; idx < len1; idx++)
	{
		string[idx] = s1[idx];
	}
	for (idx = len1, idy = 0; idx < len1 + len; idx++, idy++)
	{
		string[idx] = s2[idy];
	}
	string[len1 + len] = '\0'; /* insert NULL char */

	return (string);
}
