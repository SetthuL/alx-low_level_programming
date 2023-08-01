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
	int sum;
	sum = 0;

	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = head->next;
	}
	return (sum);
}
