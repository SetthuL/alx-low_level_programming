#include <stdio.h>
/**
 * main - A program that prints in lowercase alphabets in reverse
 * Return: 0 ( A program runs a success)
 */
int main(void)
{
	char sl = 'a';

	while (sl <= 'z')
	{
		putchar(sl);
		sl--;
	}
	putchar('\n');
	return (0);
}
