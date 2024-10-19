#include <stdio.h>
#include "main.h"

/**
 * times_table - function
 */

void times_table(void)
{
	int result, fil, col = 0, dig1, dig2;

	while (col <= 9)
	{
		for (fil = 0; fil <= 9; fil++)
		{
			result = fil * col;
			if (result >= 10)
			{
				dig1 = result / 10;
				dig2 = result % 10;
				_putchar(dig1 + '0');
				_putchar(dig2 + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(result + '0');
			}
				if (fil != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			result = 0;
		}
		col++;
		_putchar('\n');
	}
	_putchar('\n');
}
