#include "main.h"

/**
 * _print_rev_recursion - A function that prints string in reverse
 * @s: A string to printed in reverse
 * Return: Void (A program runs a success)
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
	_print_rev_recursion(s + 1);
	_putchar(*s);
	}
}
