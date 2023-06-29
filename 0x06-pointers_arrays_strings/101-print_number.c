#include "main.h"
/**
 * print_number - prints an int using _putchar
 * @n: the int
 * Return: nothing
 */
void print_number(int n)
{
	unsigned int p;

	if (n < 0)
	{
		putchar('-');
		p = (unsigned int)(-n);
	}
	else
		p = (unsigned int) n;
	if (p / 10 != 0)
		print_number(p / 10);
	putchar('0' + (p % 10));
}
