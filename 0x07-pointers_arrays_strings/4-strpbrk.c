#include "main.h"

/**
 * _strpbrk - A function that searches a string for any of a set of bytes
 * @s: Input
 * @accept: Input
 * Return: 0 (A program runs a success)
 */

char *_strpbrk(char *s, char *accept)
{
	int b;

	while (*s)
	{
		for (b = 0; accept[b]; b++)
		{
			if (*s == accept[b])
				return (s);
		}
		s++;
	}
	return (0);
}
