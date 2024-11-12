#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_array - function
 * @size: parameter
 * @c: parameter
 * Return: b
 */

char *create_array(unsigned int size, char c)
{
	char *b;
	unsigned int i;

	b = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
		b[i] = c;
	}
	if (b == NULL)
	{
		return (NULL);
	}
	else
	return (b);
}
