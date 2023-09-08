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

	if (ptr == NULL) /* check if ptr is NULL */
	{
		block = malloc(new_size);
		return (block);
	}
	if (new_size == 0 && ptr != NULL) /* check new_size */
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size) /* compare sizes */
	{
		return (ptr);
	}

	len = (old_size < new_size) ? old_size : new_size; /* choose size */

	block = malloc(new_size);
	if (block == NULL) /* check malloc */
	{
		return (NULL);
	}

	for (idx = 0; idx < len; idx++) /* copy content*/
	{
		((char *)block)[idx] = ((char *)ptr)[idx];
	}

	free(ptr); /* free old memory */

	return (block);
}
