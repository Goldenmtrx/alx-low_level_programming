#include "main.h"

/**
 * free_grid - free the grid
 * @g: grind of memories
 * @h: int
 * Return: void
*/

void free_grid(int **g, int h)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);
	free(grid);
}
