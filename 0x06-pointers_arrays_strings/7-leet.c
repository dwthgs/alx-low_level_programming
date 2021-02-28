#include "holberton.h"

/**
 * leet - encodes a string into 1337
 * @str: string
 * Return: string
 */

char *leet(char *str)
{
int l, n;
char letter[] = "aAeEoOtTlL";
char number[] = "4433007711";

for (l = 0; str[l]; l++)
for (n = 0; letter[n]; n++)
if (str[l] == letter[n])
str[l] = number[n];

return (str);
}
