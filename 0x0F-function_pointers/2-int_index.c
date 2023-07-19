#include "function_pointers.h"

/**
 * int_index - A function that searches for an integer
 * @array: An array
 * @size: The size of elements in array
 * @cmp: The pointer to func of one of the 3 in main
 * Return: return index place if comparison = true, else -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int sethu;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (sethu = 0; sethu < size; sethu++)
	{
		if (cmp(array[sethu]))
			return (sethu);
	}
	return (-1);
}
