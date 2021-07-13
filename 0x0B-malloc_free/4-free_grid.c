#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * free_grid -frees a 2 dimensional array of integers
 * @grid: first paramater (double pointer)
 * @height: second paramater (integer)
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
