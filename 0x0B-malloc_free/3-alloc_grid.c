#include "main.h"
#include <stdlib.h>

/**
  * alloc_grid - Returns a pointer to a 2 dimensional array of integers
  *
  * @width: Width of the 2D array
  * @height: Height of the 2D array
  *
  * Return: Return a pointer to a 2D array (Success), or NULL (Fail)
  */
int **alloc_grid(int width, int height)
{
	int **grid, i, j;
	/* Check for invalid width or height values */
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	/* Allocate memory for the 2D array */
	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			/* Free previously allocated mem if allocation fails */
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
		/* Initialize all elements to 0 */
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
