#include <stdio.h>
#include "main.h"
#include <stddef.h>

/**
 * _strchr - function
 * @s: parameter
 * @c: parameter
 * Return: Null or &s
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	if (c == '\0')
	{
		return (&s[i]);
	}
	return (NULL);
}
