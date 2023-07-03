#include "main.h"

/**
 * _strchr - A function that locates the charecter in a string
 * @s: input
 * @c: output
 * Return: 0 (A program runs a success)
 */

char *_strchr(char *s, char c)
{
	int b;

	s = 0;

	for (; s[b] >= '\0'; b++)
	{
		if (s[b] == c)
			return (&s[b]);
	}
	return (0);
}
