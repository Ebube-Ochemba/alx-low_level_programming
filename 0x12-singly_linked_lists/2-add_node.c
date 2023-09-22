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
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = calclen(str);
	new->next = *head;
	*head = new;
	return (*head);
}
