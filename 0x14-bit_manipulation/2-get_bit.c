#include "main.h"

/**
 * get_bit - eturns the value of a bit at a given index.
 * @n: The number to work on.
 * @index: The index.
 *
 * Return: Value of bit at index, else -1 for error.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int shift, bit_val, num_bits;

	/* calculate #bits in an unsigned long int & convert to bits */
	num_bits = (sizeof(unsigned long int) * 8);

	if (index > num_bits) /* check if index is valid */
	{
		return (-1);
	}

	shift = n >> index; /* shift = n / 2^index */

	bit_val = shift & 1; /* bitwise AND result */

	return (bit_val);
}
