#include "lists.h"
#include <stddef.h>

/**
* pop_listint - A function that deletes the head node of a linked list
* @head: pointer to the first element in the linked list
* Return: The head node’s data (n).
*/

int pop_listint(listint_t **head)
{
	listint_t *whisk;

	int n;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	whisk = *head;
	*head = whisk->next;
	n = whisk->n;
	free(whisk);

	return (n);
}
