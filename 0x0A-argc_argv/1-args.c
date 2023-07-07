#include "main.h"
#include <stdio.h>

/**
 * main - A function that prints number of arguments passed into it
 * followed by a new line
 * @argc: Input
 * @argv: Input
 * Return: 0 (A program runs a success)
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d", argc - 1);
	printf("\n");

	return (0);
}
