#include "main.h"
/**
 * print_most_numbers - A function to print number from 0 to 9 but 2 and 4
 * Rewturn: void (Program runs a success)
 */

void print_most_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		if (c != 50)
		{
			if (c != 52)
			{
				_putchar(c);
			}
		}
	}
	_putchar('\n');
}
