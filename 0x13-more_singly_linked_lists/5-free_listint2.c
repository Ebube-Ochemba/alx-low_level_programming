#include "lists.h"

/**
 * free_listint2 - free linked list
 * @head: A double pointer to a linked list.
 *
 * Return: Void.
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head != NULL) /* traverse nodes */
	{
		tmp = *head; /* temporarily store current head */
		*head = (*head)->next; /* move head to next node */
		free(tmp); /* free tmp */
	}
}
