#include <stdio.h>
#include "main.h"

/**
 * leet - function
 * @s: parameter
 * Return: s
 */

char *leet(char *s)
{
	int a, d;
	char b[] = "aeotlAEOTL";
	char c[] = "4307143071";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (d = 0; b[d] != '\0'; d++)
		{
			if (s[a] == b[d])
			{
				s[a] = c[d];
				break;
			}
		}
	}
	return (s);

}
