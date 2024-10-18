#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - function
 * @a: parameter
 * Return: a or b
 */

int print_last_digit(int a)
{
	int b;

	a = a % 10;
	b = a;

	if (b < 0)
	{
		b = (-1) * a;
		_putchar(b + '0');
		return (b);
	}

	_putchar(a + '0');
	return (a);
}
