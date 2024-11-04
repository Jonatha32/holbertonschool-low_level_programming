#include <stdio.h>
#include "main.h"

/**
 * reverse_array - function
 * @a: parameter
 * @n: parameter
 */

void reverse_array(int *a, int n)
{
	int b, c = 0;

	for (b = 0; b <= n; b++)
	{
		n--;
		c = a[b];
		a[b] = a[n];
		a[n] = c;
	}
}
