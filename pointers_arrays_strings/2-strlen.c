#include <stdio.h>
#include "main.h"

/**
 * _strlen - function
 * @s: parameter
 * Return: a
 */

int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
