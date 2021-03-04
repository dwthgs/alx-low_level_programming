#include "holberton.h"

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: int
 * @height: height
 */

void free_grid(int **grid, int height)
{
int i = 0;

if (!grid || height <= 0)
return;

while (i < height)
free(grid[i++]);

free(grid);
}
