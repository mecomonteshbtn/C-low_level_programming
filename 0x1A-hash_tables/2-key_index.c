#include "hash_tables.h"

/**
 * key_index - A function that returns the normalized index for a key.
 * @key: The key to get/set in the has table.
 * @size: the size of the hash table
 * Return: Normalized index.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	index = hash_djb2((unsigned char *)key);
	return (index % size);
}
