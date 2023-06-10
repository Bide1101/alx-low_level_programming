#include "hash_tables.h"

/**
 * key_index - gives the index of a the key.
 * @key: The key to get index
 * @size: size of the hash table
 * Return: index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key) % size;

	return (index);
}
