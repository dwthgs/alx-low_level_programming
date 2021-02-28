#include "holberton.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: string
 * Return: string
 */

char *string_toupper(char *str)
{
int i, len = 0;

while (str[len])
len++;

for (i = 0; i < len; i++)
if (str[i] >= 'a' && str[i] <= 'z')
str[i] = str[i] - 32;

return (str);
}
