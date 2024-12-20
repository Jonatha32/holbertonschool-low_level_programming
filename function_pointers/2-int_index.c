#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function
 * @array: parameter
 * @size: parameter
 * @cmp: function
 * Return: i or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		cmp(array[i]);

		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
