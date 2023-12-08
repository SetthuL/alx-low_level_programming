#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - A function that frees a dlistint_t list.
 * @head: Pointer
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *existing_node, *tempnext_node;

	existing_node = head;

	while (existing_node != NULL)
	{
		tempnext_node = existing_node->next;
		free(existing_node);
		existing_node = tempnext_node;
	}
}
