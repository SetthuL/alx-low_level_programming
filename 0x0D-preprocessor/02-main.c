#include <stdio.h>

/**
 * main - A program that print the name of the file it was compiled from
 * followed by a new line
 * Return: 0 (A program runs a success)
 */

int main(void)
{
	printf("%s", __FILE__);
	printf("\n");
	return (0);
}
