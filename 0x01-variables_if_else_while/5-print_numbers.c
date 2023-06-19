#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that prints single dig number of base 10 from 0
 * Return: 0 (A program runs a success)
 */
int main(void)
{
	int num;

	while (num < 10)
	{
		printf("%d", num);
		num += 1;
	}
	printf("\n");
	return (0);
}

