#include "main.h"

/**
 * print_rev - A function that prints a string in reverse followed by new line
 * @s: A string to print
 * Return: Void (A program runs a success)
 */

void print_rev(char *s)
{
	int length;
	int a;

	length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;

	for (a = length; a > 0; a--)
	{
		putchar(*s);
		s--;
	}
	putchar('\n');
}
