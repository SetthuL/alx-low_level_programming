#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - A function that allocate memor using malloc
 * @b: Input
 * Return: A pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
