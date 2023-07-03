#include "main.h"

/**
 * *_memset - A function that files memory with a constant byte
 * @b: The value to be set
 * @n: The byte of the memory
 * @s: The pointer of the memory
 * Return: s (A program runs a success)
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;

	/*Delacring FOR*/
	for (i = 0; i < n; i++)
	{
		*(s + i) = b; /*add 1 position s*/

	} /*END FOR*/

	return (s);
}
