#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - array iterator
 * @array: parameter
 * @size: parameter
 * @action: parameter
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int a = 0;
while (a < size)
{
action(array[a]);
a++;
}
}
