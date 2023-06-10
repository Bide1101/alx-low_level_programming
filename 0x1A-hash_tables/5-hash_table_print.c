#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to print
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmpNode = NULL;
	unsigned long int i = 0;
	int first_pair = 1;  /*  Flag to track the first key/value pair printed */

	if (ht == NULL || ht->array == NULL)
		return;

	printf("{");

	while (i < ht->size)
	{
		tmpNode = ht->array[i];
		i++;

		while (tmpNode)
		{
			if (first_pair != 1)
				printf(", ");

			printf("'%s': '%s'", tmpNode->key, tmpNode->value);
			first_pair = 1;
			tmpNode = tmpNode->next;
		}
	}
	printf("}\n");
}
