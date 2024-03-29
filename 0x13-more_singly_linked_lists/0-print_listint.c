#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: A pointer to the list_t list.
 *
 * Return: The number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL) /* traverse struct */
	{
		printf("%d\n", h->n); /* print struct members */
		count++; /* count each iteration */
		h = h->next; /* move pointer to next node */
	}

	return (count);
}
