#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - A function that returns the sum of all the data (n)
 * of a dlistint_t linked list.
 * @head: Pointer
 * Return: The sum of all the data (n) otherwise 0 if empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *existing_sum;

	existing_sum = head;

	while (existing_sum != NULL)
	{
		sum += existing_sum->n;
		existing_sum = existing_sum->next;
	}
	return (sum);
}
