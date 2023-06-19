#include <stdio.h>
/**
 * main - Program that prints all possible combos of single num seperated by ,
 * Return: 0 (A program runs a success)
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		if (i != '0')
		{
			putchar(',');
			putchar(' ');
		}
		++i;
	}
	putchar('\n');
	return (0);
}
