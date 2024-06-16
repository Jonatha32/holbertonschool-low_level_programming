#include "main.h"
/**
 * print_triangle - print a triangle
 * @size: parameter
 */
void print_triangle(int size)
{
int a;
int b;

if (size > 0)
{
for (a = 1; a <= size; a++)
{
for (b = size - a; b > 0; b--)
{
_putchar(' ');
}
for (b = 1; b <= a; b++)
{
_putchar(35);
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
