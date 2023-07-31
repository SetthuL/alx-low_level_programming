#include "lists.h"
#include <stddef.h>

/**
* free_listint2 - A functio that frees a linked list
* @head: pointer to the listint_t list to be freed
*/
void free_listint2(listint_t **head)
{
	listint_t * secfreelink;

	if (head == NULL)
	return;

	while (*head)
	{
		secfreelink = (*head)->next;
		free(*head);
		*head = secfreelink;
	}
	*head = NULL;
}
