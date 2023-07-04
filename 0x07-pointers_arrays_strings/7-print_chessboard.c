#include "main.h"

/**
 * print_chessboard - A function that prints chessboard
 * @a: The pointer to the pieces to print
 * Return: Void (A program runs a success)
 */

void print_chessboard(char (*a)[8])
{
	int l, b;

	for (l = 0; l < 8; l++)
	{
		for (b = 0; b < 8; b++)
		{
			_putchar(a[l][b]);
		}
		_putchar('\n');
	}
}
