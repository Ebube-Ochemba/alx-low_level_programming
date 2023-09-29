#include "main.h"

/**
 * get_endianness - Checks the Endianness.
 *                  (i.e. How your computer stores numbers in memory).
 *
 * Return: first value stored (0 if big endian, 1 if little endian).
 */

int get_endianness(void)
{
	/* store hex value of 1 in a 4 byte int (0x00000001) */
	/* Use a pointer to check if first byte stored is 00 or 01 */
	/* big endian would store 00, little would store 01 */
	
	int uno = 0x00000001;
	char *byte = (char *)&uno;

	return (byte[0]);
}
