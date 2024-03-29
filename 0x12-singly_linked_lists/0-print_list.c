#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: A pointer to the list_t list.
 *
 * Return: The number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL) /* traverse struct */
	{
		if (h->str == NULL) /* check pointer */
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str); /* print struct members */
		}
		count++; /* count each iteration */
		h = h->next; /* move pointer to next node */
	}
	return (count);
}
