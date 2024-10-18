#include <stdio.h>
#include "main.h"

/**
 * 
 *
 */

void jack_bauer(void)
{
	int hours, minutes;
	int dh1, dh2, dm1, dm2;

	for (hours = 0; hours <= 23; hours++)
	{
			dh1 = hours / 10;
                        dh2 = hours % 10;
                        _putchar(dh1 + '0');
                        _putchar(dh2 + '0');
                        _putchar(':');

		for (minutes = 0; minutes <= 59; minutes++)
		{
			dm1 = minutes / 10;
                        dm2 = minutes % 10;
                        _putchar(dm1 + '0');
                        _putchar(dm2 + '0');
                        _putchar('\n');
		}
	}
}
