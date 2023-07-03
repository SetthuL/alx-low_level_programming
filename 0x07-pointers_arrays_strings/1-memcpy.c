#include "main.h"

/**
 * _memcpy - A function that copies a memory area
 * @dest: A return pointer
 * @src: Destination of the memory copied
 * @n: Number of bytes
 * Return: dest (a program runs a success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int s;
	int b;

	s = 0;
	b = n;

	for (; s < b; s++)
	{
		dest[s] = src[s];
		n--;
	}
	return (dest);
}

