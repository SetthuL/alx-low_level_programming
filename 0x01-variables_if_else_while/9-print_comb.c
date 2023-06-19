#include <stdio.h>
/**
 * main - Program that prints all possible combos of single num seperated by ,
 * Return: 0 (A program runs a success)
 */
int main(void)
{
	int s = '0';

	while (s <= '9')
	{
		putchar(s);
		if (s != '0')
		{
			putchar(',');
			putchar(' ');
		}
		++s;
	}
	putchar('\n');
	return (0);
}
