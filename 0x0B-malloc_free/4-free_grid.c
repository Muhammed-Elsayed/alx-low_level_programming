#include "main.h"
#include <stdlib.h>

/**
 *free_grid - free grid
 *@grid: ptr to ptr .
 *@height: height of the grid .
 */


void free_grid(int **grid, int height)
{
	for (; height > 1; height--)
	{
		free(grid[height - 2]);

	}
	free(grid);
}
