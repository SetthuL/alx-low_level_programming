#include "main.h"

/**
* clear_bit - A sets the value of a bit to 0 at a given index
* @n: A pointer of an unsigned long int
* @index: Input
* Return: 1 if it worked, -1 if it didn't.
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int value = 0;

	if (index > 63)
		return (-1);
		value = 1 << index;

	if (*n & value)
		*n ^= value;

}
