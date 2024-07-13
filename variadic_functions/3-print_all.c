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
unsigned int b = 0;
char *c;
char d;
int e = 0;
va_start(a, format);
while (format && format[b])
{
if (e)
{
printf(", ");
}
e = 1;
switch (format[b])
{
case 'c':
d = va_arg(a, int);
printf("%c", d);
break;
case 'i':
printf("%d", va_arg(a, int));
break;
case 'f':
printf("%f", va_arg(a, double));
break;
case 's':
c = va_arg(a, char *);
if (c == NULL)
printf("(nil)");
else
printf("%s", c);
break;
default:
e = 0;
break;
}
b++;
}
va_end(a);
printf("\n");
}
