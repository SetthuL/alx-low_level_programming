#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that prints the alphabets in lowercases and uppercases
 * Return: 0 (A program runs a success)
 */
int main(void)
{
	int ch = 'a';
	int CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
	}

	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}
