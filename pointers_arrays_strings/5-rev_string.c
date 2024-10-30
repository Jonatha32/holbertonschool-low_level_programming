#include <stdio.h>
#include "main.h"

/**
 *
 */

void rev_string(char *s)
{
	int a = 0, b = 0;
	char *c;

	while (s[a] != '\0')
	{
		a++;
	}
	c = s[a];
	while (c[b] == s[a])
	{
		b++;
	}
	while (b >= 0)
	{
		_putchar(c[b]);
		b--;
	}
	s = c[b];
	_putchar('\n');
}
