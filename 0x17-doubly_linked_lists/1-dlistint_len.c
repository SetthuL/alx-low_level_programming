#include "lists.h"

/**
 * dlistint_len - A function that returns the number of elements
 * in a dlistint_t list
 * @h: Pointer
 * Return: The number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t sl = 0;

	while (h != NULL)
	{
	h = h->next;
	sl++;
	}
	return (sl);
}
