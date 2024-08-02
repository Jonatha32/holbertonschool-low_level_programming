#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_binary - print binary
 * @n:parameter
 */
void print_binary(unsigned long int n)
{
unsigned long int a;
int b = 0;
a = 1UL << (sizeof(n) * 8 - 1);
while (a > 0)
{
if (n & a)
{
putchar('1');
b = 1;
}
if (b)
{
putchar('0');
}
a >>= 1;
}
if (!b)
{
putchar('0');
}
}
