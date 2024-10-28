#include <stdio.h>
#include "main.h"

/**
 * print_numbers - function
 */

void print_numbers(void)
{
	int a = 0;

	while (a <= 9)
	{
		_putchar(a + '0');
		a++;
	}
	_putchar('\n');
}
