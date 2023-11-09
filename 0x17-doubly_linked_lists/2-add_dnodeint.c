#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: A pointer to the head node of the dlistint_t.
 * @n: The data to be input in the node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node; /* declare a new node */

	new_node = malloc(sizeof(dlistint_t)); /* allocate memory */
	if (new_node == NULL) /* malloc check */
	{
		return (NULL);
	}

	new_node->n = n; /* Update node member */
	new_node->next = *head; /* assign address of head node to new_node *next */
	*head = new_node; /* update head of list to new_node */
	return (*head);
}
