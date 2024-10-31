#include <stdio.h>
#include "main.h"

/**
 * rev_string - function
 * @s: parameter
 */

void rev_string(char *s)
{
	int a = 0, b;
	char c;

	while (s[a] != '\0')
	{
		a++;
	}
	b = 0;
	a = a - 1;
	while (b < a)
	{
	c = s[b];
	s[b] = s[a];
	s[a] = c;
	b++;
	a--;
	}
}
