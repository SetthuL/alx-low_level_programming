#include "hash_tables.h"

/**
 * hash_table_get - A function that retrieves a value associated with a key
 * @ht: A pointer
 * @key: The key to get the value of
 * Return: The value associated with the element,
 * or NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int sl;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	sl = key_index((const unsigned char *)key, ht->size);
	if (sl >= ht->size)
		return (NULL);

	node = ht->array[sl];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
