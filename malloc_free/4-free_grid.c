#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees the 2 dimensional grid
 *
 * @grid: the grid
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
