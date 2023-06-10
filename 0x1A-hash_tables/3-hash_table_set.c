#include "hash_tables.h"

/**
 * hash_node - a function creates a new hash node
 * @key: The key of the node
 * @value: The value the node
 * Return: returns the new node or NULL on failure
 */

hash_node_t *hash_node(const char *key, const char *value)
{
	hash_node_t *node = NULL;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (NULL);

	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (NULL);
	}

	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (NULL);
	}

	node->next = NULL;

	return (node);
}

/**
 * hash_table_set - A function thats adds an element to the hash table
 * @ht: hash table to add the element to
 * @key: The key
 * @value: The value
 * Return: 1 or 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newNode = NULL, *tmpNode = NULL;
	unsigned long int index = 0;
	char *newVal = NULL;

	if (ht == NULL || ht->array == NULL || value == NULL
			|| key == NULL || ht->size == 0)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tmpNode = ht->array[index];

	while (tmpNode)
	{
		if (strcmp(tmpNode->key, key) == 0)
		{
			newVal = strdup(value);
			if (newVal == NULL)
			{
				return (0);
			}
			free(tmpNode->value);
			tmpNode->value = newVal;
			return (1);
		}
		tmpNode = tmpNode->next;
	}

	newNode = hash_node(key, value);
	if (!newNode)
		return (0);
	newNode->next = ht->array[index];
	ht->array[index] = newNode;

	return (1);
}
