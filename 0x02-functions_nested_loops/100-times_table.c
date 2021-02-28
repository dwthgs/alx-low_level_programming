#include "holberton.h"
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: Number
*/

void print_times_table(int n)
{
int c, i;

if (n >= 0 && n < 15)
for (c = 0; c <= n; c++)
{
_putchar('0');
for (i = 1; i <= n; i++)
{
int r = c * i;

_putchar(',');
_putchar(' ');

if (r < 100)
_putchar(' ');
if (r < 10)
_putchar(' ');

if (r >= 100)
_putchar('0' + (r / 100));

if (r >= 10)
_putchar('0' + (r / 10) % 10);

_putchar('0' + (r % 10));
}
_putchar('\n');
}
}
