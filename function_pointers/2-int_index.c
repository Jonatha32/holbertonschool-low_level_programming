#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - index
 * @array: parameter
 * @size: parameter
 * @cmp: parameter
 * Return: -1 or a
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int a = 0;
if (array == NULL)
{
return (-1);
}
if (cmp == NULL)
{
return (-1);
}
if (size <= 0)
{
return (-1);
}
while (a < size)
{
cmp(array[a]);
a++;
if (cmp(array[a]) != 0)
{
return (a);
}
}
return (-1);
}
