#include "main.h"

/**
 * free_grid - free a 2 dimensional array.
 * @grid: Memory to freed.
 * @height: height of the array.
 *
 * Return: returns void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
