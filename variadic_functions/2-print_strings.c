#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - function
 * @n: parameter
 * @separator: parameter
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *b;
	va_list a;

	va_start(a, n);

	for (i = 0; i < n; i++)
	{
		b = va_arg(a, char *);
		if (b == NULL)
			printf("(nil)");
		else
		printf("%s", b);
		if (i != n - 1 && separator != NULL)
		{
		printf("%s", separator);
		}
	}
	printf("\n");
	va_end(a);



}
