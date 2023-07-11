#include "main.h"
#include <stdlib.h>
/**
 * argstostr - A function that concatenates all the arguments of your program
 * followed by a new line
 * @ac: int input
 * @av: double pointer array
 * Return: 0 (A program runs a success)
 */

char *argstostr(int ac, char **av)
{
	int sethu, never, runs = 0;
	int away = 0;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (sethu = 0; sethu < ac; sethu++)
	{
		for (never = 0; av[sethu][never]; never++)
			away++;
	}

	away += ac;

	str = malloc(sizeof(char) * away + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	for (sethu = 0; sethu < ac; sethu++)
	{
	for (never = 0; av[sethu][never]; never++)
	{
		str[runs] = av[sethu][never];
		runs++;
	}
	if (str[runs] == '\0')
	{
		str[runs++] = '\n';
	}
	}
	return (str);
}
