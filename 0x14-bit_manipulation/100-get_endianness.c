#include "main.h"

/**
 * get_endianness - A function that checks the endianness of the system.
 * Return: 0 if big endian, 1 if little endian.
 */

int get_endianness(void)
{
	unsigned int num;
	char *fcchecksendiness = (char *)&num;

	num = 1;

	if (*fcchecksendiness == 1)
		return (1);
	else
		return (0);
}
