#include "holberton.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: a pointer to the duplicated string
 */

char *_strdup(char *str)
{
char *str_copy, *str_ptr;
int i = 0;

if (!str)
return (NULL);

while (i < str[i])
i++;

str_copy = malloc(sizeof(*str) * (i + 1));

if (str_copy == NULL)
return (NULL);

str_ptr = str_copy;
while (*str)
*str_copy++ = *str++;

*str_copy = '\0';

return (str_ptr);
}
