#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - creates a two dimentional array of integers.
 * @width: array row.
 * @height: array colum.
 *
 * Return: Pointer to the array created.
 */
int **alloc_grid(int width, int height)
{
	int x, **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * width);

	if (grid == NULL)
		return (NULL);

	for (x = 0; x < width; x++)
	{
		grid[x] = malloc(sizeof(int) * height);

		if (grid[x] == NULL)
			return (NULL);
	}

	return (grid);
}
