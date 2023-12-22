#include "hash_tables.h"

/**
 * hash_table_delete - A function that Deletes a hash table
 * @ht: A pointer
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *node, *tmp;
	unsigned long int sethul;

	for (sethul = 0; sethul < ht->size; sethul++)
	{
		if (ht->array[sethul] != NULL)
		{
			node = ht->array[sethul];
			while (node != NULL)
			{
				tmp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = tmp;
			}
		}
	}
	free(head->array);
	free(head);
}
