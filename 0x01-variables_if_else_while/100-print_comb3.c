#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success).
*/
int main(void)
{
int fc, sc;

for (fc	= 0; fc	< 9; fc++)
for (sc = fc + 1; sc <= 9; sc++)
{
putchar('0' + fc);
putchar('0' + sc);
if (fc > 7 && sc > 8)
break;
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
