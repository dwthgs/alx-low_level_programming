#include "holberton.h"

/**
 * is_prime - returns 1 if the input integer is a prime number,
 *           otherwise return 0
 * @n: int
 * @i: int
 * Return: int
 */

int is_prime(int n, int i)
{
if (n % i == 0 || n < 2)
return (0);
else if (n / i == 1)
return (1);

return (is_prime(n, i + 1));
}

/**
 * is_prime_number - checks if n is a prime number
 * @n: int
 * Return: int
 */

int is_prime_number(int n)
{
	return (is_prime(n, 2));
}
