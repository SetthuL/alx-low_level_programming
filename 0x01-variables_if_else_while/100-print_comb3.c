#include <stdio.h>
/**
 * main - A program that prints all possible different combo of two digits
 * Return: 0 (S program runs a success)
 */
int main(void)
{
	int units = '0';
	int tens = '0';

	for (tens = '0'; tens <= '9'; tens++)
	{
		for (units = '0'; units <= '9'; units++)
		{
			if (!((units == tens) || (tens > units)))
			{
				putchar(tens);
				putchar(units);
				if (!(units == '9' && tens == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
