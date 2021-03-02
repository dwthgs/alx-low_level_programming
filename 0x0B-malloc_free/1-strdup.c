#include "holberton.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: a pointer to the duplicated string
 */

char *_strdup(char *str)
{
int i = 1;
char *str_copy;

if (!str)
return (NULL);

while (str[i])
i++;

str_copy = malloc((sizeof(char) * i) +1);

if (!str_copy)
return (NULL);

for (i = 0; str[i]; i++)
str_copy[i] = str[i];

str_copy[i] = '\0';

return (str_copy);
}
