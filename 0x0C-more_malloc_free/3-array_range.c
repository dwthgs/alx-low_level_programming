#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: int
 * @max: int
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
int *ap, i, len = 0;

if (min > max)
return (NULL);

while (len < (max - min))
len++;

ap = malloc(sizeof(int) * (len + 1));

if (!ap)
return (NULL);

for (i = 0; i <= len; i++)
ap[i] = min++;

return (ap);
}
