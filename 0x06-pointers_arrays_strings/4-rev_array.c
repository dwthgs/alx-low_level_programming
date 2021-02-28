#include "holberton.h"

/**
 * reverse_array - reverses the content of an aay of integers
 * @a: aay
 * @n: Int
 */

void reverse_array(int *a, int n)
{
int len, temp = 0;

for (len = 0; len < --n; len++)
temp = a[n],
a[n] = a[len],
a[len] = temp;
}
