#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Prototypes
 *
 * @width: int
 * @height: int
 *
 * Return: Null or grid
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int w;
	int h;
	int i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}
	for (h = 0; h < height; h++)
	{
		grid[h] = (int *)malloc(width * sizeof(int));
		if (grid[h] == NULL)
		{
			for (i = 0; i < h; i++)
				;
			return (NULL);
		}
	}
	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
		{
			grid[h][w] = 0;
		}
	}
	return (grid);
}
