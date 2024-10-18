#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - function
 */

void jack_bauer(void)
{
	int hours = 0, minutes;
	int dh1, dh2, dm1, dm2;

	while (hours <= 23)
	{
		dh1 = hours / 10;
		dh2 = hours % 10;
		minutes = 0;
			for (minutes = 0; minutes <= 59; minutes++)
			{
			dm1 = minutes / 10;
			dm2 = minutes % 10;
			_putchar(dh1 + '0');
			_putchar(dh2 + '0');
			_putchar(':');
			_putchar(dm1 + '0');
			_putchar(dm2 + '0');
			_putchar('\n');
			}
		hours++;
	}
}
