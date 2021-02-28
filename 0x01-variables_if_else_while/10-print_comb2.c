#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success).
*/
int main(void)
{
int fc, sc;

for (fc	= 0; fc	< 10; fc++)
for (sc = 0; sc < 10; sc++)
{
putchar(fc + '0');
putchar(sc + '0');
if (fc == 9 && sc == 9)
break;
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
