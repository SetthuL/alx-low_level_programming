#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - A function that frees a dlistint_t list.
 * @head: Pointer
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
