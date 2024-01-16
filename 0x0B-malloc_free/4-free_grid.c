#include <stdlib.h>
#include "main.h"

/**
 * free_grid - free the memory allocated by alloc_grid
 * @grid: the memory allocated by alloc_grid
 * @height: height of the grid
 * Return: void
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
