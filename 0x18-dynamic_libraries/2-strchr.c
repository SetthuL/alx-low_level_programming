#include "main.h"
/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
		int hluli = 0;
 
		for (; s[hluli] >= '\0'; hluli++)
		{
			if (s[hluli] == c)
				return (&s[hluli]);
		}
	return (0);
}
