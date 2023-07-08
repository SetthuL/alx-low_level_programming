#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *lange = haystack;
		char *sethu = needle;
 
	while (*lange == *sethu && *sethu != '\0')
	{
	lange++;
	sethu++;
	}

	if (*sethu == '\0')
		return (haystack);
	}
	return (0);
}
