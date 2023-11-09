#include "lists.h"

/**
 * free_dlistint_t - Frees a dlistint_t list.
 * @head: doubly linked list.
 *
 * Return: Void.
 */

void free_dlistint_t(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL) /* traverse nodes */
	{
		tmp = head; /* temporarily store current head */
		head = head->next; /* move head to next node */
		free(tmp); /* free tmp */
	}
}
