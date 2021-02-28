#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
int i;
unsigned long n1 = 0, n2 = 1, sum, n1s1, n1s2,
n2s1, n2s2, fn, sn, max_num = 10000000000;

for (i = 0; i < 98; i++)
{
if (i < 91)
{
sum = n1 + n2;
n1 = n2;
n2 = sum;
printf("%ld, ", sum);
}
else
{
if (n1 && n2)
n1s1 = n1 / max_num,
n2s1 = n2 / max_num,
n1s2 = n1 % max_num,
n2s2 = n2 % max_num;
fn = n1s1 + n2s1;
sn = n1s2 + n2s2;

if (n1s2 + n2s2 >= max_num)
fn += 1,
sn %= max_num;
printf("%ld%ld", fn, sn);
n1s1 = n2s1;
n1s2 = n2s2;
n2s1 = fn;
n2s2 = sn;
n1 = 0;
n2 = 0;
if (i == 97)
break;
printf(", ");
}
}
putchar('\n');
return (0);
}
