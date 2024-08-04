#include <stdio.h>
#include "main.h"
/**
 * flip_bits - flip
 * @n: parameter
 * @m: parameter
 * Return: a or b
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int a;
unsigned int b = 0;
a = n ^ m;
while (a)
{
b += (a & 1);
a >>= 1;
}
return (b);
}
