#include <stdio.h>
#include "main.h"

/**
 * puts2 - function
 * @str: parameter
 */

void puts2(char *str)
{
	int a = 0, b;

	while (str[a] != '\0')
	{
		a++;
	}
	a = a - 1;
	for (b = 0; b < a; b += 2)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}
