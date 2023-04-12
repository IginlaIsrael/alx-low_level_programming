#include "main.h"
#include <stdlib.h>

/**
 * free_grid - a function that frees a 2-d grid
 * @grid: The grid to be freed
 * @height: The heigth of the grid to be freed
 * Return: is nothing
 */

void free_grid(int **grid, int height)
{
	int alloc;

	for (alloc = 0 ; alloc < height ; alloc++)
		free(grid[height]);
	free(grid);
}
