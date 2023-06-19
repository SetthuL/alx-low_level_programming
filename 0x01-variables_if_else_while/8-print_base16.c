#include <stdio.h>
/**
 * main - A program that prints nubers of base 16 in lowercase
 * Return: 0 (A program runs a success)
 */

int main(void)
{
	int num;
	char sl;

	for (num = 0; num <= 10; num++)
	{
		putchar((num % 10) + '0');
	}
	for (sl = 'a'; sl <= 'f'; sl++)
	{
		putchar(sl);
	}
	putchar('\n');
	return (0);
}
