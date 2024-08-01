#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * binary_to_uint - binary
 * @b: parameter
 * Return: a
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int a = 0;
int c = 0;
if (b == NULL)
{
return (0);
}
while (b[c] != '\0')
{
if (b[c] != '0' && b[c] != '1')
{
return (0);
}
a = a * 2 + (b[c] - '0');
b++;
}
return (a);
}
