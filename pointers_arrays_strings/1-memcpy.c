#include <stdio.h>
#include "main.h"

/**
 * _memcpy - function
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i, b = 0;

	for (i = 0; i < n; i++)
	{
		dest[b] = src[i];
		b++;
	}
	return (dest);
}
