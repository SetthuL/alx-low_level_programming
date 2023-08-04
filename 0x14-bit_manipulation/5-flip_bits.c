#include "main.h"

/**
 * flip_bits - A function that returns the number of bits you would need
 * to flip to get from one number to another
 * @n: The 1st number
 * @m: The 2nd number
 * Retrn: Number of bits to flip (A program runs a success)
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int twonums = n ^ m;
	unsigned int ui = 0;

	while (twonums != 0)
	{
		ui += twonums & 1;
		twonums >>= 1;
	}
	return (ui);
}
