#include "main.h"

/**
 * _puts - Entry point- A program that prints a string to stdout
 * @str:The string to be printed
 * _putchar prints new line
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');

}
