#include <stdlib.h>
#include "main.h"

/**
 * _realloc - A function that reallocates a memory block using malloc and free
 * @ptr: A pointer to the memory previsouly allocated by malloc
 * @old_size: A size of the allocated memory for ptr
 * @new_size: A new size of the new memory block
 *
 * Return: Pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *sh;
	char *lvsh;
	unsigned int sethu;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));

	sh = malloc(new_size);
	if (!sh)
		return (NULL);

	lvsh = ptr;

	if (new_size < old_size)
	{
		for (sethu = 0; sethu < new_size; sethu++)
			sh[sethu] = lvsh[sethu];
	}
	if (new_size > old_size)
	{
		for (sethu = 0; sethu < old_size; sethu++)
			sh[sethu] = lvsh[sethu];
	}
	free(ptr);
	return (sh);
}
