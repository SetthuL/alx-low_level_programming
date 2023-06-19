#include <stdio.h>
/**
 * main - Program that prints all possible combos of single num seperated by ,
 * Return: 0 (A program runs a success)
 */
int main(void)
{
	int e = '0';

	while (e <= '5')
	{
		putchar(e);
		if (e != '0')
		{
			putchar(',');
			putchar(' ');
		}
		e++;
	}
	putchar('\n');
	return (0);
}
