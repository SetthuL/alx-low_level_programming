#include "main.h"

/**
* set_bit - A function that sets the value of a bit to 1 at a given index.
* @n: A pointer of an unsigned long int
* @index: Input
* Return: 1 if success, -1 if failed
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int value;

	if (index >= 63)
		return (-1);
	value = 1 << index;

	*n |= value;
	return (1);
}
