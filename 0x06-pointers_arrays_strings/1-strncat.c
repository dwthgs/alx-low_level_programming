#include "holberton.h"

/**
 * _strncat - concatenates two strings
 * @dest: string
 * @src: string
 * @n: int
 * Return: string
 */

char *_strncat(char *dest, char *src, int n)
{
int len = 0, i;

while (dest[len])
len++;

for (i = 0; i < n && src[i]; i++)
dest[len++] = src[i];

return (dest);
}
