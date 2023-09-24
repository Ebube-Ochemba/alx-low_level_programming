#include "lists.h"

/**
 * free_list - free linked list
 * @head: linked list
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL) /* traverse nodes */
	{
		tmp = head; /* temporarily store current head */
		head = head->next; /* move head to next node */
		free(tmp->str); /* free tmp member */
		free(tmp); /* free tmp */
	}
}
