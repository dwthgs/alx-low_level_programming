#include "holberton.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: Array
 * @n: Int
 */

void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
printf("%d", a[i]),
(i != n - 1) ? printf(", ") : 0;

putchar('\n');
}
