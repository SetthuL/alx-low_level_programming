#include "hash_tables.h"

/**
 * hash_table_print - A function that prints a hash table
 * @ht: A pointer
 * Description: You should print the key/value in the order
 * that they appear in the array of hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int sethul;
	unsigned char hashbang = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (sethul = 0; sethul < ht->size; sethul++)
	{
		if (ht->array[sethul] != NULL)
		{
			if (hashbang == 1)
				printf(", ");

			node = ht->array[sethul];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			hashbang = 1;
		}
	}
	printf("}\n");
}
