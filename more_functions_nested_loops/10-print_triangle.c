#include <stdio.h>
#include "main.h"

/**
 * print_triangle - function
 * @size: parameter
 */

void print_triangle(int size)
{
	int a, b, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size - a - 1; b++)
			{
				_putchar(' ');
			}
			for (c = 0; c < a + 1; c++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
}
