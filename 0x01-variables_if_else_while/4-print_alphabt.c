#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that prints all letter except q and e
 * Return: 0 ( A program runs a successs)
 */
int main(void)
{
	int sl = 'a';

	while (sl <= 'z')
	{
		if ((sl != 'e') && (sl != 'q'))
		{
			putchar(sl);
		}
		sl++;
	}
	putchar('\n');
	return (0);
}
