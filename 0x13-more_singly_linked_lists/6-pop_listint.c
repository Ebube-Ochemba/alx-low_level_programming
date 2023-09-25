#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list,
 *               and returns the head node’s data (n).
 * @head: A double pointer to a linked list.
 *
 * Return: 0 if linked list is empty, else head node's data.
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *tmp;

	if (*head == NULL) /* check if list is empty */
		return (0);

	tmp = *head; /* temporarily store current head */
	data = (*head)->n; /* store node data */
	*head = (*head)->next; /* move head to next node */
	free(tmp); /* free tmp */

	return (data);
}
