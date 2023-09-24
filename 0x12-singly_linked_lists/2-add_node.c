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
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: The head pointer of the linked list.
 * @str: The string to add to the node field called str.
 *
 * Return: address of new element, or NULL if failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node; /* declare a new node */

	new_node = malloc(sizeof(list_t)); /* allocate memory */
	if (new_node == NULL) /* malloc check */
	{
		return (NULL);
	}

	new_node->str = strdup(str); /* Duplicate string and assign it to str */
	new_node->len = calclen(str);/* calculate string length and assign to len */
	new_node->next = *head; /* assign address of head node to new_node *next */
	*head = new_node; /* update Head of list to new_node */
	return (*head);
}
