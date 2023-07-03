#include "main.h"

/**
 * print_chessboard - A function that prints a chessboerd
 * @a: An array
 * Return: 0 (A program runs a success)
 */

void print_chessboard(char (*a)[8])
{
	int b;
	int s;

	b = 0;

	for (b = 0; b < 8; b++)
	{
		for (s = 0; s < 8; s++)
			_putchar(a[b][s]);
		_putchar('\n');
	}

}
