#include "holberton.h"

/**
 * _strncpy - copies a string
 * @dest: string
 * @src: string
 * @n: int
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
int i = -1;

while (++i < n && src[i])
dest[i] = src[i];

while (i < n)
dest[i++] = '\0';

return (dest);
}
