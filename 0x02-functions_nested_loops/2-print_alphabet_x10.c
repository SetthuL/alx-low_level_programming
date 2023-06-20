#include "main.h"
/**
 * print_alphabet - A function that prints 10X the alphabet in lowercase
 * Return: void
 */

void print_alphabet_x10(void)
{
	char sl;
	int i;
	i = 0;

	while (i < 10)
	{
		for (sl = 'a'; sl <= 'z'; sl++)
		{
			putchar(sl);
		}
		putchar('\n');
		sl++;
	}
}
