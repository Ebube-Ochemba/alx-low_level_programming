#include "main.h"

/**
 * flip_bits - Calculates the number of bits you would need to flip to
 *             get from one number to another.
 * @n: An unsigned long int.
 * @m: A pointer to an unsigned long int.
 *
 * Return: The number of bits you would need to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bit_count;
	unsigned long int xor_result;

	xor_result = n ^ m; /* XOR to get unidentical bits */

	bit_count = 0;

	while (xor_result != 0) /* count 1's in XOR result */
	{
		/* removes the rightmost 1 */
		xor_result = xor_result & (xor_result - 1);
		bit_count++; /* count till 0 */
	}

	return (bit_count);
}
