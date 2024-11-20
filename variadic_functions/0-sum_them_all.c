#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function
 * @n: parameter
 * Return: suma
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, suma;
	va_list a;

	va_start(a, n);

	suma = 0;
	for (i = 0; i < n; i++)
	{
		suma += va_arg(a, const unsigned int);
	}
	va_end(a);
	return (suma);
}
