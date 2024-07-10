#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - print numbers
 * @separator: parmeter
 * @n: parameter
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list a;
unsigned int c;
va_start(a, n);
for (c = 0; c < n; c++)
{
int b = va_arg(a, int);
printf("%d", b);
if (separator != NULL && c < n - 1)
{
printf("%s", separator);
}
}
va_end(a);
printf("\n");
}

