#include "holberton.h"

/**
 * _islower - checks for lowercase character
 * @c: The character to be checked.
 * Return: 1 (true) if character is lowercase, otherwise 0 (false)
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
return (0);
}
