#include <stdio.h>
#include "main.h"

/**
 * reverse_array - function
 * @a: parameter
 * @n: parameter
 */

void reverse_array(int *a, int n)
{
	int i = n - 1, b, c = 0;

	for (b = 0; b <= i; b++)
	{
		c = a[b];
		a[b] = a[i];
		a[i] = c;
		i--;
	}
}
