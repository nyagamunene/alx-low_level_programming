#include "main.h"
/**
*free_grid - frees a 2D array.
*@grid: the grid.
*@height: the len of the grid.
*Return: None.
*/
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
