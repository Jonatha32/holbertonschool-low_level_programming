#include <stdio.h>
#include "main.h"

/**
 *
 *
 */

void print_times_table(int n)
{
	int col, fil, dig1, dig2, dig3, result;
			
	for (col = 0; col <= n; col++)
	{
		for (fil = 0; fil <= n; fil++)
		{
			result = col * fil;
			dig1 = result / 100;
        		dig2 = (result % 100) / 10;
        		dig3 = result % 10;
			if(result < 10)
			{
				_putchar(result + '0');	
			}
			else if (result => 10 && result < 100)
			{
				_putchar(dig1 + '0');
				_putchar(dig2 + '0');
			}
			else if (result >= 100)
			{
				_putchar(dig1 + '0');
				_putchar(dig2 + '0');
				_putchar(dig3 + '0');
			}
		}
	}
	_putchar('\n');
	
}
