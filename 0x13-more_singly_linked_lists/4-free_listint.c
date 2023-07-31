#include "lists.h"
#include <stddef.h>

/**
* free_listint - A function that frees a linked list
* @head: listint_t list to be freed
*/

void free_listint(listint_t *head)
{
	listint_t *freelink;

	while (head)
	{
		freelink = head->next;
		free(head);
		head = freelink;
	}
}
