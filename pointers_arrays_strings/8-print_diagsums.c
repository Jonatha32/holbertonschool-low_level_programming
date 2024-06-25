#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print diagonal
 * @a: parameter
 * @size: parameter
 */
void print_diagsums(int *a, int size)
{
int b = 0;
int c = 0;
int d;
for (d = 0; d < size; d++)
{
b += a[d * size + d];
c += a[d * size + (size - 1 - d)];
}
printf("%d, %d\n", b, c);
}

