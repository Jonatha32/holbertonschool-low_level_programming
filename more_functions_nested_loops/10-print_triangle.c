#include <stdio.h>
#include "main.h"

/**
 *
 */

void print_triangle(int size)
{
	int a, b;
	
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar('#');
			}
			for (int c = 0; c 
		_putchar(' ');
		_putchar('\n');
		}
	}
}
