 #include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be modified.
 *
 * Return: A Pointer to the modified string.
 */

char *cap_string(char *str)
{
	int idx = 0;

	/* check first index for capital */
	while (str[idx])
	{
		/* iterate through string */
		while (!(str[idx] >= 'a' && str[idx] <= 'z'))
		{
			idx++;
		}

		/* if lowercase and prior char is separator, capitalize*/
		if (str[idx - 1] == ' ' ||
				str[idx - 1] == '\t' ||
				str[idx - 1] == '\n' ||
				str[idx - 1] == ',' ||
				str[idx - 1] == ';' ||
				str[idx - 1] == '.' ||
				str[idx - 1] == '!' ||
				str[idx - 1] == '?' ||
				str[idx - 1] == '"' ||
				str[idx - 1] == '(' ||
				str[idx - 1] == ')' ||
				str[idx - 1] == '{' ||
				str[idx - 1] == '}' ||
				idx == 0)
			str[idx] -= 32;
		idx++;
	}
	return (str);
}
