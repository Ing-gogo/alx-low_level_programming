#include "main.h"
#include <stdlib.h>

/**
 * free_grid - furnction that frees 2 dimensional grid created
 * @grid: grid to be freed
 * @height: length of the grid
 * Return : void
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}


