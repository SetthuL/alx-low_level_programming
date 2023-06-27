#include "main.h"

/**
 * print_array - A function that prints n elements of an array of integers
 * dollowed by a new line
 * @a: An array of integer
 * @n: Numbwe of elements to be printed
 * Return: Void (A program runs a success)
 */

void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < (n - 1); b++)
	{
		printf("%d, ", a[b]);
	}
	if (b == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}

