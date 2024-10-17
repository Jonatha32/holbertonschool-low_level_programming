#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - function
 * Return: void
 */

void print_alphabet_x10(void)
{
	int a;
	char b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 'a'; b <= 'z'; b++)
		{
			putchar(b);
		}
		putchar('\n');
	}
}
