#include "main.h"

/**
 * _memset - A function that fills memory with constant byte
 * @n: The number of times to copy b
 * @b: The charecter to copy
 * @s: The memory area to be filled
 * Return: n (A program runs success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int l;

	for (l = 0; l < n; l++)
	{
		s[l] = b;
	}
	return (s);
}
