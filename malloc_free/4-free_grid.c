#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Prototypes
 *
 * @grid: int
 * @height: int
 *
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
