#include "lists.h"

/**
 * insert_nodeint_at_index - nserts a new node at a given position.
 * @head: A double pointer to a linked list.
 * @idx: The index to insert the new node.
 * @n: The data to insert at idx.
 *
 * Return: Null if list is empty, else the address of the new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;
	unsigned int count = 0;

	if (head == NULL) /* check pointer */
		return (NULL);

	new_node = malloc(sizeof(listint_t)); /* allocate memory */
	if (new_node == NULL) /* malloc check */
		return (NULL);

	new_node->n = n; /* Update node member */

	if (idx == 0) /* assign new_node as head */
	{
		new_node->next = *head;
		*head = new_node; /* update head of list to new_node */
		return (new_node);
	}

	current = *head; /* temporarily store current node */

	while (current != NULL && count < idx - 1) /* find valid idx */
	{
		current = current->next; /* move to next node */
		count++; /* count nodes */
	}

	/* if idx is invalid */
	if (current == NULL || current->next == NULL || count != idx)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = current->next; /* update *next of new node */
	current->next = new_node; /* update *next of current node */

	return (new_node);
}
