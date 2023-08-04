#include "main.h"

/**
* clear_bit - A function that sets the value of a bit to 0 at a given index
* @n: A pointer of number
* @index: Input
* Return: 1 if success -1 if failed
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int value = 0;

	if (index >= 63)
		return (-1);

	value = 1 << index;

	if (*n & value)
		*n ^= value;
	return (1);

}
