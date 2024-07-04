#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - array integers
 * @min: parameter
 * @max: parameter
 * Return: a
 */
int *array_range(int min, int max)
{
int *a;
int b;
int c;
if (min > max)
{
return (NULL);
}
b = max - min + 1;
a = malloc(b *sizeof(int));
if (a == NULL)
{
return (NULL);
}
while (c < b)
{
a[c] = min + c;
c++;
}
return (a);
}
