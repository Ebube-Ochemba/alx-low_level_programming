#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: The head pointer of the linked list.
 * @n: The int to add to the node field called n.
 *
 * Return: address of new element, or NULL if failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node; /* declare a new node */

	new_node = malloc(sizeof(listint_t)); /* allocate memory */
	if (new_node == NULL) /* malloc check */
	{
		return (NULL);
	}

	new_node->n = n; /* Update node member */
	new_node->next = *head; /* assign address of head node to new_node *next */
	*head = new_node; /* update head of list to new_node */
	return (*head);
}
