#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - A function that frees a 2 dimensional grid previously
 * created by your alloc_grid function
 * @grid: 2d grid
 * @height: height dimension of grid
 * Description: frees memory of grid
 * Return: Void (A program runs a success)
 */

void free_grid(int **grid, int height)
{
	int sethu;

	for (sethu = 0; sethu < height; sethu++)
	{
		free(grid[sethu]);
	}
	free(grid);
}
