#include "main.h"

/**
 * _memset - A function that files memory with a constant byte
 * @b: The value to be set
 * @n: The byte of the memory
 * @s: The pointer of the memory
 * Return: s  change array with new val for n bytes(A program runs a success)
 */

char *_memset(char *s, char b, unsigned int n)

{
	int i = 0;

	/*Delacring FOR*/
	for (; n > 0; i++)
	{
		s[i] = b;
		n--;

	}
	return (s);
}
