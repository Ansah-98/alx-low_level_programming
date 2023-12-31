/**
 * free_grid - free the 2d array
 *
 * @grid: 2d array
 *
 * @height: height of the 2d array
 *
 * description: freeing up a 2d arrray
 *
 * Return: return nothing
 *
 */
#include <stdlib.h>
void free_grid(int **grid, int height)
{
	int j;

	if (grid == NULL || height == 0)
		return;
	for (j = 0; j < height; j++)
		free(grid[(height - 1) - j]);
	free(grid);
}
