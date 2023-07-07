#include "main.h"
#include <stdio.h>


/**
 * main - A program that prints minimum number of coins
 * to make change for an amout of money
 * print erro and follow by a new line
 * @argc: Input
 * @argc: Input
 */

int main(int argc, char *argv[])
{
	int coins, notes = 0;

	if (argc != 2)
	{
		printf("Error");
		printf("\n");
		return (1);
	}

	notes = atoi(argv[1]);

	while (coins > 0)
		notes++;

	if ((coins - 25) >= 0)
	{
		coins -= 25;
	}return (0);
}
