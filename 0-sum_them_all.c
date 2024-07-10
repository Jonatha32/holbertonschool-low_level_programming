#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - sum them all
 * @n: parameter
 * Return: b
 */
int sum_them_all(const unsigned int n, ...)
{
va_list a;
int b = 0;
unsigned int c;
unsigned int d;
va_start(a, n);
for (c = 0; c < n; c++)
{
d = va_arg(a, int);
b += d;
}
while (d < n)
{
putchar(d);
d++;
}
va_end(a);
return (b);
}
