#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that prints in lower case
 * Return: 0 (A programe runs a success)
 */
int main(void)
{
	int cha = 'a';
	while (cha <= '2')
	{
		putchar(cha);
		cha++;
	}
	putchar('\n');
	return (0);
}
