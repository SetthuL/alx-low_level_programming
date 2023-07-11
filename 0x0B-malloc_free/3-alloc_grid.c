#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - A function that returns a pointer to
 * a 2 dimensional array of integers
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **bsl;
	int sethu, hluli;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	bsl = malloc(sizeof(int *) * height);

	if (bsl == NULL)
	{
		return (NULL);
	}
	for (sethu = 0; sethu < height; sethu++)
	{
		bsl[sethu] = malloc(sizeof(int) * width);

		if (bsl[sethu] == NULL)
		{
			for (; sethu >= 0; sethu--)
			{
				free(bsl[sethu]);
			}
			free(bsl);
			return (NULL);
		}
	}
	for (sethu = 0; sethu < height; sethu++)
	{
		for (hluli = 0; hluli < width; hluli++)
			bsl[sethu][hluli] = 0;
	}
	return (bsl);
}
