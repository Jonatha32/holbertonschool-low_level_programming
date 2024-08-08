#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - print all
 * @format: parameter
 */
void print_all(const char * const format, ...)
{
va_list a;
int b = 0;
char *d = "";
char *c;
va_start(a, format);
while (format && format[b])
{
switch (format[b])
{
case 'c':
printf("%s%c", d, va_arg(a, int));
break;
case 's':
c = va_arg(a, char *);
if (c == NULL)
c = "(nil)";
printf("%s%s", d, c);
break;
case 'i':
printf("%s%d", d, va_arg(a, int));
break;
case 'f':
printf("%s%f", d, va_arg(a, double));
break;
default:
b++;
continue;
}
d = ", ";
b++;
}
printf("\n");
va_end(a);
}
