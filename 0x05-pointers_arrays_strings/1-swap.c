#include "main.h"

/**
 * swap_int - A function that swaps the value of two integers
 * @a: An integer to be swapped
 * @b: An integer to be swapped
 * Return: Void (A program runs a success)
 */

void swap_int(int *a, int *b)
{
	int sl;

	sl = *a;
	*a = *b;
	*b = sl;
}
