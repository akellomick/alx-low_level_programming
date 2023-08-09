#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees malloc alocated memory of a 2-D array.
 * @grid: 2-D array.
 * @height: dimension of the array (grid).
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
