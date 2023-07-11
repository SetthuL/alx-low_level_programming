#include "main.h"
#include <stdlib.h>

/**
 * str_concat - A function that concerntrate on 2 strings
 * @s1: input
 * @s2: input
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *conct;
	int sethu, hluli;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	sethu = hluli = 0;

	while (s1[sethu] != '\0')
		sethu++;

	while (s2[hluli] != '\0')
		hluli++;
	conct = malloc(sizeof(char) * (sethu + hluli + 1));

	if (conct == NULL)

		return (NULL);
	sethu = hluli = 0;

	while (s1[sethu] != '\0')
	{
		conct[sethu] = s1[sethu];
		sethu++;
	}
	while (s2[hluli] != '\0')
	{
		conct[sethu] = s2[hluli];
		sethu++, hluli++;
	}
	conct[sethu] = '\0';
	return (conct);
}
