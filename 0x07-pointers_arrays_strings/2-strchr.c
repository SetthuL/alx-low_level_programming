#include "main.h"

/**
 * _strchr - A function that locates the charecter in a string
 * @s: input
 * @c: input
 * Return: a pointer if c is found otherwise null(A program runs a success)
 */

char *_strchr(char *s, char c)
{
	int b;

	for (b = 0; s[b] >= '\0'; b++)
	{
		if (s[b] == c)
			return (s + b);
	}
	return ('\0');
}
