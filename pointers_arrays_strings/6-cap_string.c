#include <stdio.h>
#include "main.h"

/**
 * cap_string - function
 * @s: parameter
 * Return: s
 */

char *cap_string(char *s)
{
	int i, m;

	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] = s[0] - 32;
	}

	for (i = 0; s[i] != '\0'; i++)
	{
	if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t' ||
		s[i] == ',' || s[i] == ';' || s[i] == '.' ||
		s[i] == '!' || s[i] == '?' || s[i] == '"' ||
		s[i] == '(' || s[i] == ')' || s[i] == '{' ||
		s[i] == '}')
	{
		m = i + 1;
		if (s[m] >= 'a' && s[m] <= 'z')
		{
			s[m] = s[m] - 32;
		}
	}
	}
	return (s);
}
