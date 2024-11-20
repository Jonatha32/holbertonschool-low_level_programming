#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - function
 * @separator: parameter
 * @n: parameter
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, b;
	va_list a;

	va_start(a, n);

	b = 0;

	for (i = 0; i < n; i++)
	{
		b = va_arg(a, unsigned int);
		printf("%d", b);
		if (i != n - 1 && separator != NULL)
		{
		printf("%s", separator);
		}
	}
	printf("\n");
	va_end(a);
}
