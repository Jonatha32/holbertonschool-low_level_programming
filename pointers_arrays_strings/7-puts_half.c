#include <stdio.h>
#include "main.h"

/**
 * puts_half - function
 * @str: parameter
 */

void puts_half(char *str)
{
	int a = 0, b;

	while (str[a] != '\0')
	{
		a++;
	}
	a = (a % 2 == 0) ? a / 2 : (a / 2) + 1;

	for (b = a; str[b] != '\0'; b++)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}
