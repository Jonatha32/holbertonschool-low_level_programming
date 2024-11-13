#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - function
 * @s1: parameter
 * @s2: parameter
 * Return: s3
 */

char *str_concat(char *s1, char *s2)
{
	int a = 0, b = 0, c, d;
	char *s3;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	while (s1[a] != '\0')
	{
		a++;
	}
	while (s2[b] != '\0')
	{
		b++;
	}

	s3 = malloc((a + b + 1) * sizeof(char));
	if (s3 == NULL)
	{
		return (NULL);
	}

	for (c = 0; s1[c] != '\0'; c++)
	{
		s3[c] = s1[c];
	}

	for (d = 0; s2[d] != '\0'; d++)
	{
		s3[c + d] = s2[d];
	}

	s3[c + d] = '\0';

	return (s3);
}
