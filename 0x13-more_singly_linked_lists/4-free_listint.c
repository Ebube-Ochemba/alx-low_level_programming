#include "lists.h"

/**
 * free_listint - free linked list
 * @head: linked list
 *
 * Return: Void.
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL) /* traverse nodes */
	{
		tmp = head; /* temporarily store current head */
		head = head->next; /* move head to next node */
		free(tmp); /* free tmp */
	}
}
