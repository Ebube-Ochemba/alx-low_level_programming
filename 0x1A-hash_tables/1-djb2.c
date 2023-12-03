#include "hash_tables.h"

/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c; /* Holds ASCII value of current charecter */

	hash = 5381; /* Magic number for good hash values */

	/**
	 * 1. Get the ASCII value of the current character, hash it
	 *    and then increment the pointer to the next character
	 *    of the string.
	 * 2. The loop until it encounters a character with an ASCII
	 *    value of 0 (i.e the NULL byte or end of string).
	 */
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
		/**
		 * Updating hash value.
		 * 1. (hash << 5) + hash == hash * 33, but faster.
		 * 2. Add the result c.
		 */
	}
	return (hash); /* return hashed string */
}
