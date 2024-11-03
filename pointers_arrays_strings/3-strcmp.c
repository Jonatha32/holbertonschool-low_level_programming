#include <stdio.h>
#include "main.h"

/**
 * _strcmp - function
 * @s1: parameter
 * @s2: parameter
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int a;

	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
		{
			return (s1[a] - s2[a]);
		}
		else if (s1[a] == s2[a])
		{
			a++;
		}
		else if (s1 == s2)
		{
			return (0);
		}
	}
	return (0);
}
