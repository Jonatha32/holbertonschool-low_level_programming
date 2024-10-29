#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - function
 * @n: parameter
 */

void print_diagonal(int n)
{
	int a = 0, b;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
		while (a < n)
		{
			for (b = 0; b < a; b++)
			{
			_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			a++;
		}
	}
}
