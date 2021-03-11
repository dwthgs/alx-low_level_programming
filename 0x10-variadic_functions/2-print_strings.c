#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: char
 * @n: int
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ab;
unsigned int i;
char *s;

va_start(ab, n);
for (i = 0; i < n; i++)
{
s = va_arg(ab, char *);
if (!s)
printf("(nil)");
if (s)
printf("%s", s);
if (separator && i < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(ab);
}
