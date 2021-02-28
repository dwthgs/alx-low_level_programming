#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: Integer
 */

void print_diagonal(int n)
{
int v, h;

if (n > 0)
for (v = 1; v <= n; v++)
{
for (h = 1; h < v; h++)
_putchar(' ');

_putchar('\\');
_putchar('\n');
}
else
_putchar('\n');
}
