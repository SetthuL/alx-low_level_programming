#include <stdio.h>
#include "lists.h"

/**
* print_list - A function that prints all the elements of a linked list
* @h: A pointer to print
* Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
	char b = 0;

	while (h)
	{
		if (!h->str)

			printf("[0] (nil\n)");

		else
		{
			printf("[%u] %s\n", b,  h->str);
			h = h->next;
			b++;
		}
	}
	return (b);
}
