#include "main.h"

/**
 * _strspn - A function that gets the length of a prefix subtring
 *@s: The string to be searched
 *@accept: The prefix to be reasured
 * Return: The number of bytes from accept (bs) in which s only consists of 
 * bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bs = 0;
	int l;

	while (*s)
	{
		for (l = 0; accept[l]; l++)
		{
			if (*s == accept[l])
			{
				bs++;
				break;
			}
			else if (accept[l + 1] == '\0')
				return (bs);
		}
		s++;
	}
}
