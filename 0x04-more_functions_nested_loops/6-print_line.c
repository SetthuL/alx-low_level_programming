#include "main.h"
/**
 * print_line - A function that draws a straight line in the terminal
 * @n: A number of time the charecter should draw a s line
 * Return: void
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

