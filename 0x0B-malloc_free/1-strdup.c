#include "holberton.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: a pointer to the duplicated string
 */

char *_strdup(char *str)
{
char *str_copy, *str_ptr, *temp;
int i = 0;

if (!str)
return (NULL);

temp = str;

while (i < str[i])
i++;

str_copy = malloc(sizeof(*str) * (i + 1));

if (str_copy == NULL)
return (NULL);

str_ptr = str_copy;
while (*temp)
*str_copy++ = *temp++;

*str_copy = '\0';

return (str_ptr);
}
