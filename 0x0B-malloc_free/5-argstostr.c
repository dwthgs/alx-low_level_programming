#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: int
 * @av: char array
 * Return: NULL if ac == 0 or av == NULL
 */

char *argstostr(int ac, char **av)
{
char *str, *temp;
int arg, size;

if (!ac || !av)
return (NULL);

for (arg = 0, size = 1; arg < ac; arg++, size++)
for (temp = av[arg]; *temp; temp++)
size++;

str = (char *) malloc(sizeof(char) * size);

if (!str)
return (NULL);

for (arg = 0, size = 0; arg < ac; arg++, size++)
{
for (temp = av[arg]; *temp; temp++, size++)
str[size] = *temp;
str[size] = '\n';
}

str[size] = '\0';

return (str);
}
