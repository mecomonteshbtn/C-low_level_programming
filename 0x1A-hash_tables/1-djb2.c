#include "hash_tables.h"

/**
  * hash_djb2 - A function that passed the key to the hash table.
  * @str: The key to set/get in the hash table.
  * Return: The index in the has table.
  */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
