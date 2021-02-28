#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
int i;
long int n1 = 0, n2 = 1, sum;

for (i = 0; i < 50; i++)
{
sum = n1 + n2;
n1 = n2;
n2 = sum;
printf("%ld", sum);
if (i == 49)
break;
printf(", ");
}
putchar('\n');
return (0);
}
