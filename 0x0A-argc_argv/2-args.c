#include "main.h"
#include <stdio.h>

/**
 * main - A function that prints all arguments it receives
 * prinrinting one argument per line ending with new line
 * @argc: Input
 * @argv: Input
 * Return: 0 (A progam runsa success)
 */

int main(int argc, char *argv[])
{
	int sl;

	sl = 0;

	for (sl = 0; sl < argc; sl++)
	{
		printf("%s", argv[sl]);
	}
	return (0);
}
