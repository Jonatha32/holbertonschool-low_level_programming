#include <stdio.h>
#include "main.h"

/**
 * _strcpy - function
 * @dest: parameter
 * @src: parameter
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int a = 0, c = 0;

	while (src[a] != '\0')
	{
		dest[c] = src[a];
		a++;
		c++;
	}
	dest[c] = '\0';
	return (dest);
}
