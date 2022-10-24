#include "main.h"
/**
 * free_grid - put my memory grid to 0 (i guess)
 * @grid: the grid to free
 * @height: the height of the grid
 * Return: no return
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
		grid[x] = NULL;
	}
	free(grid);
	grid = NULL;
}
