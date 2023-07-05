#include "main.h"

/**
 * _puts_recursion - A function that prints a string folowed by new line
 * @s: String to be printed
 * Return: 0 (A program runs a success)
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
