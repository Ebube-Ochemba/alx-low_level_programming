#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index index of a
 *                           listint_t linked list.
 * @head: A double pointer to a linked list.
 * @index: The index to delete the node.
 *
 * Return: 1 if success, else -1.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new_node, *previous, *current;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0) /* assign new head */
	{
		new_node = (*head)->next; /* temporarily store next node */
		free(*head);
		*head = new_node; /* update head */
		return (1);
	}

	current = *head; /* temporarily store current node */
	previous = NULL; /* initialize previous */

	while (current != NULL && count < index) /* find idx */
	{
		previous = current; /* store current node as previous node */
		current = current->next; /* move to next node */
		count++; /* count nodes */
	}

	if (current == NULL) /* idx doesn't exist */
	{
		return (-1);
	}

	previous->next = current->next; /* update *next of new node */
	free(current); /* delete node */

	return (1);
}
