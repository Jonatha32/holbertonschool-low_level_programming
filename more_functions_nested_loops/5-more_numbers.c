#include <stdio.h>
#include "main.h"

/**
 * more_numbers - function
 */

void more_numbers(void)
{
	int a = 0, b = 0;

	while (a < 10)
	{
		while (b <= 14)
		{
			if (b > 9)
			_putchar(b / 10 + '0');
			_putchar((b % 10) + '0');
			b++;
		}
		_putchar('\n');
		b = 0;
		a++;
	}
}
