#include "main.h"
#include <stddef.h>

/**
* binary_to_uint - A function that converts a binary number to an integer int
* @b: Binary to be coverted
* Return: Unsigned int
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int answer = 0;

	if (b == NULL)
		return (0);

	for (; *b; b++)
	{

		if (*b == '0' || *b == '1')
		{
			answer <<= 1;
			answer += (*b - '0');
		}
		else
		{
			return (0);
		}
	}
	return (answer);
}
