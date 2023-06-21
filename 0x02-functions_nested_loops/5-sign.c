#include "main.h"
/**
 * print_sign - A function that prints a sign number
 * @n: The number has to be checked
 * Retun: 1 for a positive number -1 for negative otherwise 0
 */
int print_sign(int n)
{

	if (n > 0)
	{
		_putchar(42);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(43);
		return (-1);
	}
	else
	{
		_putchar(46);
		return (0);
	}
}
