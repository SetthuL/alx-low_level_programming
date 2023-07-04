#include "main.h"

/**
 * print_diagsums - A function that prints the sum of the two diagonals
 * of square matrix of integers
 * @a: The matrix of the integers
 * @size: The size of the matrix
 * Return: The size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int l, sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (l = 0; l < size; l++)
	{
		sum1 += a[l];
		a += size;
	}
	a -= size;

	for (l = 0; l < size; l++)
	{
		sum2 += a[l];
		a -= size;
	}
	printf("%d, %d\n", sum1, sum2);
}
