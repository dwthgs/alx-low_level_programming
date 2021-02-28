#include "holberton.h"

/**
 * puts2 - prints every other character of a string
 * @str: string
 */

void puts2(char *str)
{
int len = 0, i = 0;

while (str[len])
len++;

while (i < len)
_putchar(str[i]),
i += 2;

_putchar('\n');
}
