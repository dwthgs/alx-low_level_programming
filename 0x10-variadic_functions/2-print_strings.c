#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: char
 * @n: int
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list valist;
unsigned int i;
char *str;

if (!separator)
return;

va_start(valist, n);

for (i = 0; i < n; i++)
{
str = va_arg(valist, char *);
if (!str)
str = "(nil)";

printf("%s", str);
if (i != (n - 1))
printf("%s", separator);
}
printf("\n");

va_end(valist);
}
