#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print strings
 * @separator: parameter
 * @n: parameter
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list a;
unsigned int b;
char *c;
va_start(a, n);
for (b = 0; b < n; b++)
{
c = va_arg(a, char *);
if (c == NULL)
{
printf("(nil)");
}
else
{
printf("%s", c);
}
if (separator != NULL && b < n - 1)
{
printf("%s", separator);
}
}
va_end(a);
printf("\n");
}
