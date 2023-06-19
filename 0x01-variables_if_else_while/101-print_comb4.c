#include <stdio.h>
/**
 * main - A program that prints all possible diff combos of digits
 * Return: 0 ( a program runs a success)
 */
int main(void)
{
	int units = '0';
	int tens = '0';
	int hundreds = '0';

	while (units <= '7')
	{
		while (tens <= '8')
		{
			while (hundreds <= '9')
			{
				if (units < tens && tens < hundreds)
				{
					putchar(units);
					putchar(tens);
					putchar(hundreds);
					if (!(units == '7' && tens == '8' && hundreds == '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
				hundreds++;
			}
			hundreds = '0';
			tens++;
		}
		tens = '0';
		units++;
	}
	putchar('\n');
	return (0);
}

