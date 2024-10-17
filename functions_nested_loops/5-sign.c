#include <stdio.h>
#include "main.h"

/**
 * print_sign - function
 * @n: parameter
 * Return: 1, -1 or 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(n + '0');
		return (0);
	}
}
