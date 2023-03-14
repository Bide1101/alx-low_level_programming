#include "main.h"
#include <stdlib.h>

/**
* free_grid - a function that frees a 2 dimensional grid
* @grid: pointer to 2dimensional array
* @height: height of array
* Return: 0 Always
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
