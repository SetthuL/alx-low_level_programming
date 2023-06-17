#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that prints the alphabets in lowecase
 * Return: 0 (A program runs a success)
 */
int main(void)
{
	int ch = 'a';

	while (ch <= '2')
	{
		putchar(ch);
		ch++;
	}
	putchar("\n");
	return (0);
}
