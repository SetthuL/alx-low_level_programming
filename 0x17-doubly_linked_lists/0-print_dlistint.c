#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - A function that prints all the elements
 * of a dlistint_t list
 * @h: Pointer
 * Return: The number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t sl = 0;

	while (h != NULL)
	{
	printf("%d\n", h->n);
	h = h->next;
	sl++;
	}
	return (sl);
}
