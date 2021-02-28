#include <stdio.h>
#include <math.h>

/**
* main - finds and prints the largest prime factor of the number 612852475143
* Return: 0
*/

int main(void)
{
long i, max, n = 612852475143;

for (i = 1; i <= sqrt(n); i++)
if (n % i == 0)
max = n / i;

printf("%ld\n", max);

return (0);
}
