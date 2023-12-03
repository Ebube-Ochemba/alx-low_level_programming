#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: The hash table.
 *
 * Return: Void.
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int idx;

	if (ht == NULL || ht->size == 0 || ht->array == NULL)
		return;

	for (idx = 0; idx < ht->size; idx++)
	{
		while (ht->array[idx] != NULL)
		{
			tmp = ht->array[idx]->next;
			free(ht->array[idx]->key);
			free(ht->array[idx]->value);
			free(ht->array[idx]);
			ht->array[idx] = tmp;
		}

	}
	free(ht->array);
	free(ht);
}
