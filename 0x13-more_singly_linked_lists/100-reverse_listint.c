#include "lists.h"
#include <stddef.h>

/**
* reverse_listint - A function that reverses a linked list
* @head: pointer to the first node in the list
* Return: pointer to the first node in the new list
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous list = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}
	*head = previous;
	return (*head);
}
