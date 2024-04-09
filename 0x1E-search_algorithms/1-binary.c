#include "search_algos.h"

/**
 * binary_search - A function searches for a value in sorted array of integers
 * using the binary search algorithm
 * @array: An array of integers
 * @size: A size of an array
 * @value: A vaalue to search
 * Return: Index of value or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{

	size_t i, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}
