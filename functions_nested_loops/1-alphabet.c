#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - function
 * Return: void
 */

void print_alphabet(void)
{
	int a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
