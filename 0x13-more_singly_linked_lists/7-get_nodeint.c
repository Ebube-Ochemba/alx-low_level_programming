#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: A linked list.
 * @index: The nth node to access.
 *
 * Return: NULL if node is empty, else the nth node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL) /* check if list is empty */
		return (0);

	while (head != NULL) /* traverse list */
	{
		if (count == index)
		{
			return (head);
		}
		else
		{
			count++; /* update counter */
			head = head->next; /* move to next node */
		}
	}

	return (NULL);
}
