#include <stdio.h>
#include "main.h"

/**
 * _puts - function
 * @str: parameter
 */

void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
