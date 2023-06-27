#include "main.h"

/*
 * _puts - A function that prints string followed by new line to stdout
 * @str: String to print
 * Return: Void (A program runs a success)
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str++);
	}
	putchar('\n');
}
