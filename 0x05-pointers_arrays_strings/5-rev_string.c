#include "holberton.h"

/**
 * rev_string - reverses a string
 * @s: string
 */

void rev_string(char *s)
{
int len = 0, i;
char *start = s, *end = s, temp;

while (s[len])
len++;

for (i = 0; i < len - 1; i++)
end++;

for (i = 0; i < len--; i++)
{
temp = *end;
*end = *start;
*start = temp;
start++;
end--;
}
}
