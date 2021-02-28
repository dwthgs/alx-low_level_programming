#include "holberton.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string
 * Return: string
 */

char *cap_string(char *str)
{
int i = 0, in;

for (i = 0; str[i]; i++)
{
while (!(str[i] >= 'a' && str[i] <= 'z'))
i++;

in = i - 1;

if (str[in] == ' ' ||
str[in] == '\t' ||
str[in] == '\n' ||
str[in] == ',' ||
str[in] == ';' ||
str[in] == '.' ||
str[in] == '!' ||
str[in] == '?' ||
str[in] == '"' ||
str[in] == '(' ||
str[in] == ')' ||
str[in] == '{' ||
str[in] == '}' ||
in == -1)
str[i] -= 32;
}

return (str);
}
