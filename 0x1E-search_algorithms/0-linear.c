#include "search_algos.h"

/**
 * linear_search - A function that searches for a value
 * in a sorted array of integers using the Linear search algorithm
 * @array: An array of integers
 * @size: The size of an array
 * @value: A value to search
 * Return: index of value or -1 if not found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t sl;

	if (array == NULL)
		return (-1);
	for (sl = 0; sl < size; sl++)
	{
		printf("Value checked array[%ld] = [%d]\n", sl, array[sl]);
		if (array[sl] == value)
			return (sl);
	}
	return (-1);
