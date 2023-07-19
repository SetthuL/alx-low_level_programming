#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - A function that prints each array elem on a newl
 * @array: An array to print
 * @size: Input
 * @action: A pointer to print in regular or hex
 * Return: void (A program runs a success)
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int sethu;

	if (array == NULL || action == NULL)
		return;

	for (sethu = 0; sethu < size; sethu++)
	{
		action(array[sethu]);
	}
}
