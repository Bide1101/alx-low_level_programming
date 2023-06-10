#include "hash_tables.h"

/**
 * hash_table_delete - A function that deletes a hash table.
 * @ht: hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *curr = NULL, *next = NULL;
	unsigned long int i = 0;

	if (!ht)
		return;

	while (i < ht->size)
	{
		curr = ht->array[i];
		i++;

		while (curr != NULL)
		{
			next = curr->next;
			free(curr->key);
			free(curr->value);
			free(curr);
			curr = next;
		}
	}

	free(ht->array);
	free(ht);
}
