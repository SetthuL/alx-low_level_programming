#include <stdlib.h>
#include "main.h"

/**
 * array_range - A function that create an array of integers
 * @min: Values to be stored (minimum)
 * @max: Values (max imum) to be stored
 * Return: A pointer to the new array (A program runs a success)
 */

int *array_range(int min, int max)
{
	int *prints;
	int sethu, size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;

	prints = malloc(sizeof(int) * size);

	if (prints == NULL)
	{
		return (NULL);
	}

	for (sethu = 0; min <= max; sethu++)
		prints[sethu] = min++;

	return (prints);
}
