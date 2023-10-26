#include "main.h"

/**
 * flip_bits - A function that returns the number of bits needed to flip to get from n to m.
 * @n: The first unsigned long integer.
 * @m: The second unsigned long integer.
 * Return: The number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int excloutcome = n ^ m;
	unsigned int count;

	count = 0;

	while (excloutcome > 0)
	{
		count += excloutcome & 1;
		excloutcome >>= 1;
	}

	return (count);
}
