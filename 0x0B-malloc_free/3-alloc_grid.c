#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid - function that returns a pointer to a 2 dimen array of ints .
 *@width: the width of the array .
 *@height: the height of the array .
 *Return: ptr to ptr .
 */


int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;


	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **) malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
			return (NULL);

		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
