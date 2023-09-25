#include "lists.h"

/**
 * listint_len - Calculates the number of elements in a linked list_t list.
 * @h: A pointer to the list_t list.
 *
 * Return: number of nodes/elements (length) in linked list.
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL) /* check if node is NULL */
	{
		count++; /* update counter */
		h = h->next; /* move to next node */
	}

	return (count);
}
