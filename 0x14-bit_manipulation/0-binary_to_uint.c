#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string containing a binary number.
 *
 * Return: The converted number or 0 if failed.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int idx, len = 0, sum = 0;

	if (b == NULL) /* check string */
		return (0);

	for (; b[len] != '\0'; len++) /* calculate string length */
		;

	for (idx = len; idx--;) /* iterate string from right to left */
	{
		if (b[idx] == '1') /* check for binary digits */
		{
			sum += 1 << (len - 1 - idx); /* left shift */
		}
		else if (b[idx] != '0') /* skip 0, but return for other numbers */
		{
			return (0);
		}
	}

	return (sum);
}
