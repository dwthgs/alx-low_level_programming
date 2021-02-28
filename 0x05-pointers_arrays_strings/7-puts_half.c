#include "holberton.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: string
 */

void puts_half(char *str)
{
int len = 0;

while (str[len])
len++;

len = (len - 1) / 2;

while (str[++len])
_putchar(str[len]);

_putchar('\n');
}
