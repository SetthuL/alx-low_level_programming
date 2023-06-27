#include "main.h"

/**
 * _strlen - A function that returns the length of a string
 * @s: String to be returned
 * Return: legnth (A program runs a success)
 */

int _strlen(char *s)
{
	int length;

	length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
