#include "main.h"

/**
* print_binary - A function that prints the binary representation of a number
* @n: unsigned long int
* Return: Void ( A program runs success)
*/

void print_binary(unsigned long int n)
{
	if (n >> 0)
	{
		if (n >> 1)
		print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
	else
	{
	_putchar('0');
	}
}
