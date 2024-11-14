#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - function
 * @b: parameter
 * Return: a
 */

void *malloc_checked(unsigned int b)
{
	void *a = malloc(b);

	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
