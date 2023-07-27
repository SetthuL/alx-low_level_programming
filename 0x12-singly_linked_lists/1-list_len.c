#include <stdlib.h>
#include "lists.h"

/**
* list_len - A function that returns the number of elements in a linked list
* @h: A pointer list
* Return: number of elements in sl
*/

size_t list_len(const list_t *h)
{
	size_t sl = 0;

	while (h)
	{
		sl++;
		h = h->next;
	}
	return (sl);
}
