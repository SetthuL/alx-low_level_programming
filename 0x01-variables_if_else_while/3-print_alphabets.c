#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that prints with both lower and uppercase
 * Return: o (A program runs a success)
 */
int main(void)
{
	int sl = 'a';
	int SL = 'A';

	while (sl <= 'z')
	{
		putchar(sl);
		sl++;
	}
	while (SL <= 'Z')
	{
		putchar(SL);
		SL++;
	}
	putchar('\n');
	return (0);
}
