#include "holberton.h"

/**
 * str_concat - concatenates two strings
 * @s1: string
 * @s2: string
 * Return: a pointer to the string
 */

char *str_concat(char *s1, char *s2)
{
int str1 = 0, str2 = 0, i, j = 0;
char *str = NULL;

if (!s1)
s1 = "";

if (!s2)
s2 = "";

while (s1[str1])
str1++;

while (s2[str2])
str2++;

str = malloc(sizeof(char) * (str1 + str2) +1);

if (!str)
return (NULL);

for (i = 0; i < (str1 + str2); i++)
str[i] = i < str1 ? s1[i] : s2[j++];

return (str);
}
