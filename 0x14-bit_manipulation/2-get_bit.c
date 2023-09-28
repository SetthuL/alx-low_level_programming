#include "main.h"

/**
* get_bit - A function that returns the value of a bit at a given index
* @n: unsigned long int input
* @index: input
* Return: value of the bit
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int value;

	value = 0;

	if (n == 0 && index < 64)
	{
		return (0);
	}
	for (value = 0; value <= 63; n >>= 1, value++)
		if (index == value)
			return (n & 1);

	return (-1);
}
