#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - function
 * @min: parameter
 * @max: parameter
 * Return: b
 */

int *array_range(int min, int max)
{
	int *b, i;

	if (min > max)
		return (NULL);

	b = malloc((max - min + 1) * sizeof(int));
	if (b == NULL)
	{
		return (NULL);
	}

	for (i = 0; min <= max; i++)
	{
		b[i] = min;
		min++;
	}

	return (b);
}
