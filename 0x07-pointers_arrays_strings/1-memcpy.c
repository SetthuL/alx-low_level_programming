#include "main.h"

/**
 * _memcpy - A function that copies the memory area
 * @n: The function that copies
 * @src: The bytes
 * @dest: The memory of area
 * Return: A pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int l;

	l = 0;

	while (l < n)
	{
		dest[l] = src[l];
		l++;
	}
	return (dest);
}
