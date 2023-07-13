#include <stdlib.h>
#include "main.h"

/**
 * _memset - A function that fills memory wit a constant byte
 * @a: A memory to be filled
 * @h: A charecter to copy
 * @s: A number of times to copy
 * Return: A pointer to the allocated memory
 */

char *_memset(char *a, char h, unsigned int s)
{
	unsigned int sethu;

	for (sethu = 0; sethu < s; sethu++)
	{
		a[sethu] = h;
	}
	return (a);
}

/**
 * _calloc - A function that allocates memory of an array using malloc
 * @nmemb: Input
 * @size: Input
 * Return: A pointer allocated (A program runs a success)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pointer = malloc(size * nmemb);

	if (pointer == NULL)
		return (NULL);

	_calloc(pointer, (nmemb * size));
	return (pointer);
}
