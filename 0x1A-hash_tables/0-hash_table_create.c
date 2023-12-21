#include "hash_tables.h"

/**
 * hash_table_create - A function that creates harsh tables
 * @size: An array
 * Return: A pointer to the newly created hash table
 * Otherwise NULL if not successful
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_htable;
	unsigned long int sl;

	new_htable = malloc(sizeof(hash_table_t));
	if (new_htable == NULL)
		return (NULL);

	new_htable->size = size;
	new_htable->array = malloc(sizeof(hash_node_t *) * size);

	if (new_htable->array == NULL)
	{
		return (NULL);
	}
	for (sl = 0; sl < size; sl++)
		new_htable->array[sl] = NULL;

	return (new_htable);
}
