#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - frees memory used by 2D array
 * @grid: 2D array using memory
 * @height: number of arrays in 2D array
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
