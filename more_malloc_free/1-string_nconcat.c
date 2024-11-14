#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * string_nconcat - function
 * @s1: parameter
 * @s2: parameter
 * @n: parameter
 * Return: NULL or s3
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a = 0, b = 0, c, d;
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
	if (n > b)
	{
		n = b;
	}
	s3 = malloc((a + n + 1) *  sizeof(char));
	if (s3 == NULL)
	{
		return (NULL);
	}
	for (c = 0; s1[c] != '\0'; c++)
	{
		s3[c] = s1[c];
	}
	for (d = 0; s2[d] != '\0' && d < n; d++)
	{
		s3[c] = s2[d];
		c++;
	}
	s3[c] = '\0';
	return (s3);
}
