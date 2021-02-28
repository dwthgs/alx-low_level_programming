#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success).
*/
int main(void)
{
int fc, sc;

for (fc	= 0; fc	<= 98; fc++)
for (sc = fc + 1; sc <= 99; sc++)
{
putchar('0' + fc / 10);
putchar('0' + fc % 10);
putchar(' ');
putchar('0' + sc / 10);
putchar('0' + sc % 10);
if (fc == 98 && sc == 99)
break;
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
