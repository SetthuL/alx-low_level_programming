#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - A function that concatenates two strings
 * followed by the first n byte od s2 and null terminated
 * @s1: Input
 * @s2: Input
 * @n: Bytes
 * Return: A pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int sethu = 0, jett = 0, lange1 = 0, lange2 = 0;

	while (s1 && s1[lange1])
		lange1++;
	while (s2 && s2[lange2])
		lange2++;

	if (n < lange2)
		s = malloc(sizeof(char) * (lange1 + n + 1));
	else
		s = malloc(sizeof(char) * (lange1 + lange2 + 1));

	if (!s)
		return (NULL);

	while (sethu < lange1)
	{
		s[sethu] = s1[sethu];
		sethu++;
	}

	while (n < lange2 && sethu < (lange1 + n))
		s[sethu++] = s2[jett++];

	while (n >= lange2 && sethu < (lange1 + lange2))
		s[sethu++] = s2[jett++];

	s[sethu] = '\0';

	return (s);
}
