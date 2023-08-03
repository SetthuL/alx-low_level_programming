#include "main.h"

/**
* binary_to_uint - A function that converts a binary number to an integer int
* @b: Binary to be coverted
* Return: Unsigned int
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int answer = 0;
	int sl = 0;

	while (b[sl] != '\0')
	{
		if (b[sl] == 0 || b[sl] == 1)
		{
			answer <<= 1;
			answer += (b[sl] - 0);
			sl++;
		}
	}
	return (answer);
}
