#include "holberton.h"

/**
 * _strlen_recursion - counts the length of a string
 * @s: string
 * Return: int
 */

int _strlen_recursion(char *s)
{
if (*s)
return (1 + _strlen_recursion(s + 1));

return (0);
}
