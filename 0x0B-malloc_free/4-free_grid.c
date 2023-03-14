#include "main.h"
#include <stdlib.h>

/**
  * free_grid - Frees a 2D array created by the alloc_grid() function
  *
  * @grid: 2D array to free
  * @height: Height or number of rows in the 2D array
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
