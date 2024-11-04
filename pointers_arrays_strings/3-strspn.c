#include <stdio.h>
#include "main.h"

/**
 * _strspn - function
 * @s: parameter
 * @accept: parameter
 * Return: count
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, b, count = 0;
	int c;

	for (i = 0; s[i] != '\0'; i++)
	{
		c = 0;
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[i] == accept[b])
			{
				count++;
				c = 1;
				break;
			}
		}
		if (!c)
		{
			break;
		}
	}
	return (count);
}
