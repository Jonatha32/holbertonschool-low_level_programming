#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function
 * @str: parameter
 * Return: s
 */

char *_strdup(char *str)
{
	int a = 0, b;
	char *s;

	while (str[a] != '\0')
	{
		a++;
	}

	s = malloc((a + 1) * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}

	for (b = 0; s[b] < a; b++)
	{
		s[b] = str[b];
	}
	s[a] = '\0';
	return (s);
}
