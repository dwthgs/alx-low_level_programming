#include "holberton.h"

/**
 * _strcat - concatenates two strings
 * @dest: string
 * @src: string
 * Return: string
 */

char *_strcat(char *dest, char *src)
{
int len = 0, i;

while (dest[len])
len++;

for (i = 0; src[i]; i++)
dest[len++] = src[i];

dest[len] = '\0';

return (dest);
}
