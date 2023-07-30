#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: The string to be searched.
 * @accept: The prefix to be measured.
 *
 * Return: The number of bytes in s which
 *         consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	int idx = 0, jdx;
	int bytes = 0;

	/* iterate through string */
	while (s[idx] != '\0')
	{
		/* iterate through prefix */
		for (jdx = 0; accept[jdx] != '\0'; jdx++)
		{
			/* record & break at first match */
			if (s[idx] == accept[jdx])
			{
				bytes++;
				break;
			}
			/* return bytes if no match found again */
			else if (accept[jdx + 1] == '\0' && s[idx] != accept[jdx])
				return (bytes);
		}
		idx++;
	}
	/* return bytes if all match */
	return (bytes);
}
