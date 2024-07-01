#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - create array
 * @size: parameter
 * @c: parameter
 * Return: NULL or a
 */
char *create_array(unsigned int size, char c)
{
char *a;
unsigned int b = 0;
if (size == 0)
{
return ('\0');
}
a = malloc(size * sizeof(*a));
if (a == NULL)
{
return ('\0');
}
while (b < size)
{
a[b] = c;
b++;
}
return (a);
}
