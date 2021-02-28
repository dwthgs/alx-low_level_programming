#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success).
*/
int main(void)
{
int fc, sc, tc;

for (fc	= 0; fc	< 9; fc++)
for (sc = fc + 1; sc <= 8; sc++)
for (tc = sc + 1; tc <= 9; tc++)
{
putchar('0' + fc);
putchar('0' + sc);
putchar('0' + tc);
if (fc == 7 && sc == 8 && tc == 9)
break;
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
