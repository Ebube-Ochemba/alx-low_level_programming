#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table.
 * @key: The key.
 * @value: The value associated with the key.
 *
 * Return: 1 if successsful, else 0.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *tmp, *hnode;
	char *new;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
		key == NULL || value == NULL || strlen(key) == 0)
		return (0);

	idx =  key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[idx];

	while (tmp != NULL)
	{
		if (strcmp(key, tmp->key) == 0)
		{
			new = strdup(value);
			if (new == NULL)
				return (0);

			free(tmp->value);
			tmp->value = new;
			return (1);
		}
		tmp = tmp->next;
	}

	hnode = create_hash_node(key, value);
	if (hnode == NULL)
		return (0);

	hnode->next = ht->array[idx];
	ht->array[idx] = hnode;
	return (1);
}

/**
 * create_hash_node - Creates a new hash node.
 * @key: The string used mark value in the HashTable.
 * @value: The value corresponding to a key.
 *
 * Return: A newnode, else NULL.
 */
hash_node_t *create_hash_node(const char *key, const char *value)
{
	hash_node_t *new = malloc(sizeof(hash_node_t));

	if (new == NULL)
		return (NULL);

	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (NULL);
	}
	new->value = strdup(value);
	if (new->value == NULL)
	{
		free(new->key);
		free(new);
		return (NULL);
	}
	new->next = NULL;
	return (new);
}
