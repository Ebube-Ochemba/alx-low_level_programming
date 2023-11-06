#include "lists.h"

/**
 * find_listint_loop - find loop in linked list.
 * @head: pointer to head pointer of linked list.
 * Return: address of node where loop starts.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise, *hare;

	/* Find loop loop by checking if tortoise and hare meet */
	/* start both at head */
	/* : move hare by 2 paces(nodes) & tortoise by 1 pace(node)  */

	tortoise = hare = head; /* start */

	while (tortoise != NULL && hare != NULL) /* find loop */
	{
		tortoise = tortoise->next; /* pace */
		hare = hare->next->next; /* pace */

		if (tortoise == hare) /* loop found */
		{
			/*** Track loop origin  ***/
			/* start tortoise at head and hare at node they met */
			/* move both by 1 pace(node) to find loop origin */
			tortoise = head; /* reset tortoise */

			while (tortoise != hare) /* haven't met again yet */
			{
				tortoise = tortoise->next; /* pace */
				hare = hare->next; /* pace */
			}
			return (tortoise); /* loop origin */
		}
	}
	return (NULL);
}
