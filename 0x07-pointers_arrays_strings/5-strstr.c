#include "holberton.h"

/**
 * _strstr - locates a substring
 * @haystack: pointer to char
 * @needle: pointer to char
 * Return: a pointer or NULL
 */

char *_strstr(char *haystack, char *needle)
{
while (*haystack)
{
char *Begin = haystack;
char *pattern = needle;

while (*haystack && *pattern && *haystack == *pattern)
haystack++,
pattern++;

if (!*pattern)
return (Begin);

haystack = Begin + 1;
}

return (0);
}
