#include "holberton.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: int
 * @height: height
 * Return: a pointer to a 2 dimensional array of integers
 */

int **alloc_grid(int width, int height)
{
int **arr, i = 0, n = 0;

if (width <= 0 || height <= 0)
return (NULL);

arr = malloc(sizeof(int *) * height);

if (!arr)
return (NULL);

for (i = 0; i < height; i++)
{
arr[i] = malloc(sizeof(int) * width);

if (!arr[i])
{
while (i >= 0)
i--,
free(arr[i]);

free(arr);

return (NULL);
}
}

for (i = 0; i < height; i++)
for (n = 0; n < width; n++)
arr[i][n] = 0;

return (arr);
}
