#include <stdlib.h>
/**
 * free_grid - free 2D array created by alloc_grid
 * @grid: pointer to pointer of 2D array
 * @height: height of the 2D array
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int n;

	for (n = 0; n < height; n++)
		free(grid[n]);
	free(grid);
}
