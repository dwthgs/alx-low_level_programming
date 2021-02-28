#include <stdio.h>

/**
 * main - program that finds and prints the sum of the even-valued terms
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
long int true = 1, total, n1 = 0, n2 = 1, sum;

while (true)
{
sum = n1 + n2;
n1 = n2;
n2 = sum;
if (sum > 4000000)
break;
if ((sum % 2) == 0)
total += sum;
}
printf("%ld\n", total);
return (0);
}
