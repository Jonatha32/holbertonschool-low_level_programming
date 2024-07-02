#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - return a point in 2d
 * @width: parameter
 * @height: parameter
 * Return: NULL or a
 */
int **alloc_grid(int width, int height)
{
int **a;
int b = 0;
int c;
if (width < 1 || height < 1)
{
return (NULL);
}
a = malloc(sizeof(int *) * height);
if (a == NULL)
{
return (NULL);
}
while (b < height)
{
a[b] = malloc(sizeof(int) * width);
if (a[b] == (NULL))
{
for (--b; b >= 0; b--)
free(a[b]);
free(a);
return (NULL);
}
b++;
}
while (b < height)
{
for (c = 0; c < width; c++)
a[b][c] = 0;
b++;
}
return (a);
}
