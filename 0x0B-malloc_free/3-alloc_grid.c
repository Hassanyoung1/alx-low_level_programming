#include "main.h"

/**
 * alloc_grid - allocates a 2D array of integers
 * @width: the width of the grid
 * @height: the height of the grid
 *
 * Return: a pointer to the 2D array of integers, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));

		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				/*free(grid[j]);*/
				free(grid);
				return (NULL);
			}
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
