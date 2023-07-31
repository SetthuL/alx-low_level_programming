#include "lists.h"
#include <stddef.h>

/**
* sum_listint - A functuin that calculates the sum of all the data
* in a listint_t list
* @head: first node in the linked list
* Return: resulting sum
*/

int sum_listint(listint_t *head)
{
	int results = 0;
	listint_t *temp = head;

	while (temp)
	{
		results += temp->n;
		temp = temp->next;
	}
	return (results);
}
