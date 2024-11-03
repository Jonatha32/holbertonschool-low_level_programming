#include <stdio.h>
#include "main.h"

/**
 * _strncpy - function
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Return: 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (src[a] != '\0' && a < n)
	{
		dest[b] = src[a];
		a++;
		b++;
	}
	while (b < n)
	{
		dest[b] = '\0';
		b++;
	}
	return (dest);
}
