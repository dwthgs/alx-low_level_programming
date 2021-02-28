#include "holberton.h"

/**
 * print_rev - prints a string, in reverse
 * @s: string
 */

void print_rev(char *s)
{
int len = 0;

while (s[len])
len++;

while (--len >= 0)
_putchar(s[len]);

_putchar('\n');
}
