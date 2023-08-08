/**
 * alloc_grid - just does something
 *
 * @width: width of the 2d array
 * @height: height of the 2d array
 *
 * description: returns a pointer to a 2d array
 *
 * Return: returns a pointer to a 2d array with 0s
 */
#include <stdlib.h>
#include <stdio.h>

int **alloc_grid(int width, int height)
{
	int **grid;
	int row, col, i;

	if (height <= 0 || width <= 0)
		return (NULL);

	grid  = (int **)malloc(sizeof(*grid) * height);

	if (grid == NULL)
		return (NULL);

	for (row = 0; row < height; row++)
	{
		grid[row] = (int *)malloc(sizeof(int) * width);
		if (grid[row] == NULL)
		{
			for (i = 0; i < row; i++)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
	}
	for (row = 0; row < height; row++)
		for (col = 0; col < width; col++)
			grid[row][col] = 0;
	return (grid);
}
