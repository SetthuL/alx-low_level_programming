#include "main.h"
/**
 * print_last_digit - A program that prints last digit of a nuumber
 * @n: The number has to be printed
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int last;

	last = n % 9;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
