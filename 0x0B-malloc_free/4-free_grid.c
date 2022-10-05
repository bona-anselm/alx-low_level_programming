#include <stdlib.h>

/**
 * free_grid - Frees 2D grid previoiusly created by alloc_grid function
 * @grid: Holds data for the 2D array to free memory from
 * @height: Holds data for the height of the 2D array
 *
 * Return: Nothing
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
