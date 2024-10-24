#include <stdio.h>
#include "main.h"

/**
 *
 *
 */

void print_times_table(int n)
{
	int col, fil, dig1, dig2, dig3, result;

	if (n > 15 || n < 0)
		return;
	else
	for (col = 0; col <= n; col++)
	{
		for (fil = 0; fil <= n; fil++)
		{
			result = col * fil;
			dig1 = result / 100;
			dig2 = (result % 100) / 10;
			dig3 = result % 10;
			if (fil == 0)
			{
				_putchar(result + '0');
			}
			else if (result < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' '); 
				_putchar(' ');
				_putchar(result + '0');
			}
			else if (result >= 10 && result < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(dig2 + '0');
                                _putchar(dig3 + '0');
			}
			else if (result >= 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(dig1 + '0');
                                _putchar(dig2 + '0');
                                _putchar(dig3 + '0');
		}
		}
	_putchar('\n');
	}

}
