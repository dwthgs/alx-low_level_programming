#include "holberton.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times
 */

void print_alphabet_x10(void)
{
int n;
char l;

for (n = 0; n < 10; n++)
{
for (l = 'a'; l <= 'z'; l++)
_putchar(l);
_putchar('\n');
}
}
