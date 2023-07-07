#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that multiplies 2 numbers followed by new line
 * @argc: Input
 * @argv: Input
 * Return: 0 (A program runs a success)
 */

int main(int argc, char *argv[])
{
	int n1;
       	int n2;

	n1 = 0;
	n2 = 0;

	if (argc == 3)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		printf("%d", n1 * n2);
		printf("\n");
	}
	else
	{
		printf("Error");
		printf("\n");
		return (1);
	}

	return (0);
}
