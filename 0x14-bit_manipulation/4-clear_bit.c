#include "main.h"

/**
 * Clear_bit - A function that clears a bit at a given index.
 * @n: Pointer to the unsigned int.
 * @index: The index to clear.
 * Return: 1 if it worked, or -1 if an error occurred.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	unsigned long int mask;

	clearoff = 1UL << index;

	if (*n & clearoff)
		*n ^= clearoff;

	return (1);
}
