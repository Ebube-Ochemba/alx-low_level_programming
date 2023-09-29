#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: A pointer to an unsigned long int.
 * @index:The index.
 *
 * Return: 1 if success, else -1.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask, num_bits;

	/* calculate #bits in an unsigned long int & convert to bits */
	num_bits = (sizeof(unsigned long int) * 8);
	if (index > num_bits) /* check if index is valid */
	{
		return (-1);
	}
	else
	{
		mask = 1 << index; /* create mask */
		mask = (~mask); /* invert mask */
		*n = *n & mask; /* set bit to 0 */
		return (1);
	}

	return (-1);
}
