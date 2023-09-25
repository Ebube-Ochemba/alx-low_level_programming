#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: A double pointer to a linked list.
 *
 * Return: A pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous, *current;

	if (*head == NULL) /* check pointer */
		return (NULL);

	current = *head; /* temporarily store first node */
	previous = NULL; /* initialize previous */

	while (current != NULL)
	{
		*head = current->next; /* track next node */
		current->next = previous; /* link current node's ptr to prev node */
		previous = current; /* update previous node to be current node */
		current = *head; /* move current one step ahead */
	}
	*head = previous; /* unlink last element from null and point backwards */

	return (*head);
}
