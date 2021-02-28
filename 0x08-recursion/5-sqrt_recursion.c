#include "holberton.h"

/**
 * _sqrt - finds the natural root number
 * @r: int
 * @n: int
 * Return: int
 */

int _sqrt(int r, int n)
{
if (r > n)
return (-1);
if (r * r == n)
return (r);

return (_sqrt(r + 1, n));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: int
 * Return: int
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(1, n));
}
