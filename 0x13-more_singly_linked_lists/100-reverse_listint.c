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

	if (*head == NULL)
		return (NULL);

	current = *head; /* temporarily store current node */
	previous = NULL; /* initialize previous */

	while (current != NULL)
	{
		*head = current->next; /* store next node */
		current->next = previous; /* Reverse current node's pointer */
		previous = current; /* move previous one step ahead */
		current = *head; /* move current one step ahead */
	}
	*head = previous; /* set new head */

	return (*head);
}
