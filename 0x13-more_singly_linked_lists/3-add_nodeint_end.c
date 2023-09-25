#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: The head pointer of the linked list.
 * @n: The int to add to the node field called n.
 *
 * Return: address of new element, or NULL if failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *tmp; /* create new node */

	new_node = malloc(sizeof(listint_t)); /* malloc for new node */
	if (new_node == NULL) /* check malloc */
		return (NULL);

	new_node->n = n; /* set node value */
	new_node->next = NULL;

	if (*head == NULL) /* if no list nodes, set new_node to beginning */
	{
		*head = new_node;
	}
	else /* iterate till last node */
	{
		tmp = *head; /* temporarily store head pointer */

		while (tmp->next != NULL) /* search for NULL byte */
		{
			tmp = tmp->next;
		}
		tmp->next = new_node; /* update *next of last node */
	}

	return (new_node);
}
