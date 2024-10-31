#include <stdio.h>
#include "main.h"

/**
 * puts_half - function
 * @str: parameter
 */

void puts_half(char *str)
{
	int a, b;

	while (str[a] != '\0')
	{
		a++;
	}
	a = (a + 1) / 2;
	for (b = 0; b < str[a] / 2; b++)
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
