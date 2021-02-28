#include "holberton.h"

/**
 * print_square - prints a square
 * @size: Integer
 */

void print_square(int size)
{
int v, h;

if (size > 0)
for (v = 1; v <= size; v++)
{
for (h = 1; h <= size; h++)
_putchar('#');
_putchar('\n');
}
else
_putchar('\n');
}
