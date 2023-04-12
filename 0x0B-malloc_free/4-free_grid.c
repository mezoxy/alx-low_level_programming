#include "main.h"
#include <stdlib.h>
/**
 * free_grid - A function that frees a 2 dimension arry
 *
 * @grid: Array
 * @height: Number of rows
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
