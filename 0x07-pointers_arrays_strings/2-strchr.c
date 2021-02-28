#include "holberton.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer to char
 * @c: char
 * Return: a pointer or NULL
 */

char *_strchr(char *s, char c)
{
while (*s++)
if (*s == c)
return (s);

return (0);
}
