#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table to look into
 * @key: The key to search for
 * Return: the value associated with the key, or NULL if not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmpNode = NULL;
	unsigned long int index = 0;

	if (ht == NULL || ht->array == NULL || ht->size == 0 || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	tmpNode = ht->array[index];

	while (tmpNode != NULL)
	{
		if (strcmp(tmpNode->key, key) == 0)
			return (tmpNode->value);
		tmpNode = tmpNode->next;
	}

	return (NULL);
}
