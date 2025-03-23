#include "main.h"

/**
 * free_grid - Frees a 2D grid
 * @grid: the 2D grid.
 * @height: height of the grid.
 */
void free_grid(int **grid, int height)
{
	int i;

	i = 0;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
