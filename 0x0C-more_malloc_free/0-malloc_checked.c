#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b: Size of bytes to allocate.
 *
 * Return: void pointer to memory, else 98.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr; /* initialize void pointer */

	ptr = malloc(b);

	if (ptr == NULL) /* check malloc */
	{
		exit(98); /* terminate with status value */
	}

	return (ptr);
}
