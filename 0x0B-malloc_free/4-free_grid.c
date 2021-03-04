#include "holberton.h"

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: int
 * @height: height
 */

void free_grid(int **grid, int height)
{
unsigned int i;

for (i = 0; i < height; i++)
free(grid[i]);

free(grid);
}
