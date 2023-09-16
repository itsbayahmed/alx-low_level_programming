#include "main.h"
#include <stdlib.h>
/**
 * free_grid - A function that t frees a 2D grid previously
 *   created with the alloc_grid function (3-alloc_grid.c file).
 *
 * @grid : The array to be freed.
 * @height : The number of rows in the array.
 *
 * Return - Nothing (void).
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
