#include "hash_tables.h"
#include <stdio.h>

int not_last_node(const hash_table_t *ht, hash_node_t *node);

/**
 * hash_table_print - prints the contents of a hash table
 * @ht: hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, index = 0;
	hash_node_t *node = NULL;

	putchar('{');
	if (ht)
	{
		for (i = 0; i < ht->size; i++)
		{
			node = ht->array[i];
			while (node)
			{
				printf("'%s': '%s'", node->key, node->value);
				index = key_index((unsigned char *)node->key, ht->size);
				for (index = index + 1; index < ht->size; index++)
				{
					if (ht->array[index] != NULL)
					{
						break;
						printf(", ");
					}
				}
				node = node->next;
			}
		}
	}
	printf("}\n");
}
