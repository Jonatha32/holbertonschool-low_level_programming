#include "main.h"
/**
 * reverse_array - reverse array
 * @a: parameter
 * @n: parameter
 */
void reverse_array(int *a, int n)
{
int b = 0;
int c;
for (b = 0; b < n / 2; b++)
{
c = a[b];
a [b] = a[n - b - 1];
a [n - b - 1] = c;
}
}

