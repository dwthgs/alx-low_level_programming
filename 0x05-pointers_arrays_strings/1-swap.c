#include "holberton.h"

/**
 * swap_int - swaps the values of two integers
 * @a: Int
 * @b: Int
 */

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
