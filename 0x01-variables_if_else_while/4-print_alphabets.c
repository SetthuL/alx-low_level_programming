#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that prints all letters except q and e
 * Return: 0 (A program runs a success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if ((ch != 'e') && (ch != 'q'))
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
