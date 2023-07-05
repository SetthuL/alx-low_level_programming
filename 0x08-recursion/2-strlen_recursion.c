#include "main.h"

/**
 * _strlen_recursion - A function that returns the length of a string
 * @s: A string length to be returned
 * Return: Length of the string (A program runs a success)
 */

int _strlen_recursion(char *s)
{
	int length;

	length = 0;

	if (*s)
	{
		length += _strlen_recursion(s + 1);
		length++;
	}
	return (length);
}
