#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - A function that returns the nth node
 * of a dlistint_t linked list
 * @head: Pointer
 * @index: Index of the node
 * Return: If node does not exist return NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int sethul;
	dlistint_t *existing_node;

	existing_node = head;

	for (sethul = 0; existing_node != NULL && sethul < index; sethul++)
	{
		existing_node = existing_node->next;
	}
	if (sethul == index)
	{
		return (existing_node);
	}
	return (NULL);
}
