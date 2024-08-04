#include "main.h"
#include <stdio.h>
/**
 * get_bit - get bit
 * @n: parameter
 * @index: parameter
 * Return: -1 or ...
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= sizeof(n) * 8)
{
return (-1);
}
return ((n >> index) & 1);
}
