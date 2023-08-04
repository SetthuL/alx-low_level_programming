#include "main.h"

/**
 * get_endianness - A function that checks endianness of the system
 * Return:  if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int ui = 0;
	char *end = (char *)&ui;

	return (*end == 0);
}
