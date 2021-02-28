#include "holberton.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to char
 * @accept: pointer to char
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
unsigned int i, j;

for (i = 0; *s++; i++)
for (j = 0; accept[j]; j++)
if (*s == accept[j])
return (s);

return (0);
}
