#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _calloc - function
 * @nmemb: parameter
 * @size: parameter
 * Return: b
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int a = 0;
	void *b;
	unsigned int i;
	char *c;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);
	a = nmemb * size;
	b = malloc(a);
	if (b == NULL)
		return (NULL);
	c = (char *)b;
	for (i = 0; i < a; i++)
	{
		c[i] = 0;
	}
	return (b);
}
