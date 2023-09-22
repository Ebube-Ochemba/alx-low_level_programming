#include "lists.h"

/**
 * calclen - Calculates the lenght of a string.
 * @str: A pointer to the string.
 * Return: Length of the string.
 */
int calclen(const char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: The head pointer of the linked list.
 * @str: The string to add to the node field called str.
 *
 * Return: address of new element, or NULL if failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *tmp; /* create new node */

	if (str == NULL) /* validate input */
		return (NULL);
	if (strdup(str) == NULL) /* check if malloc errored */
		return (NULL);

	new_node = malloc(sizeof(list_t)); /* malloc for new node */
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str); /* set node values */
	new_node->len = calclen(str);
	new_node->next = NULL;

	if (*head == NULL) /* if no list nodes, set new_node to beginning */
		*head = new_node;
	else
	{
		tmp = *head;

		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_node;
	}

	return (new_node);
}
