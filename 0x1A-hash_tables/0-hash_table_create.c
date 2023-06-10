#include "hash_tables.h"

/**
* hash_table_create - Creates a hash table.
* @size: size of the array
* Return: The newly created hash table or NULL if failed.
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *hashT = NULL;

	hashT = malloc(sizeof(hash_table_t));
	if (hashT == NULL)
		return (NULL);

	hashT->size = size;
	hashT->array = malloc(size * sizeof(hash_node_t *));
	if (hashT->array == NULL)
	{
		free(hashT);
		return (NULL);
	}

	while (i < size)
	{
		hashT->array[i] = NULL;
		i++;
	}
	return (hashT);
}
