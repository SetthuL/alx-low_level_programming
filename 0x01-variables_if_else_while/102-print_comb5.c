#include <stdio.h>
/**
 * main -  program that prints all possible combos of 2 digit num WO repetition
 * Return: 0 (A program runs a success)
 */
int main(void)
{
	int units, tens;

	for (units = 0; units <= 99; units++)
	{
		for (tens = 0; tens <= 99; tens++)
		{
			if (units < tens && units != tens)
			{
				putchar((units / 10) + '0');
				putchar((units % 10) + '0');
				putchar(' ');
				putchar((tens / 10) + '0');
				putchar((tens % 10) + '0');
				if (units != 98 || tens != 99)
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
