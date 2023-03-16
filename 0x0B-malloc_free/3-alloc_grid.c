#include "main.h"

/**
 *
 *
 *
 */


int **alloc_grid(int width, int height)
{
	int i, j;
	int *row
	int **grid;
	
	grid = (int **grid) malloc(height * sizeof(int *));

	for (i = 0; i < height; i++)
	{
		row = malloc(width * sizeof(int));

		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
