#include "main.h"
/**
 * print_numbers - A function that prints numbers from 0 to 9
 * Return: void (A program runs a success)
 */

void print_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
