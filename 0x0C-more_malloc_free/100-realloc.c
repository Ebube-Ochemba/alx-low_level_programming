#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free.
 * @ptr: A pointer to memory block (allocated using malloc).
 * @old_size: The size in bytes of prt.
 * @new_size: The new size of new memory block.
 *
 * Return: Pointer to new memory block, else NULL.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *block;
	unsigned int idx, len = 0;

	if (ptr == NULL)
	{
		block = malloc(new_size);
		return (block);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}

	len = (old_size < new_size) ? old_size : new_size;

	block = malloc(new_size);
	if (block == NULL)
	{
		return (NULL);
	}

	for (idx = 0; idx < len; idx++)
	{
		((char *)block)[idx] = ((char *)ptr)[idx];
	}

	free(ptr);

	return (block);
}
