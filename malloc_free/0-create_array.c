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

	if (size == 0)
	{
		return (NULL);
	}

	b = malloc(size * sizeof(char));
	if (b == NULL)
	{
		printf("failed to allocate memory\n");
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		b[i] = c;
	}
	return (b);
}
