#include "main.h"
/**
 * print_square - print square
 * @size: parameter
 */
void print_square(int size)
{
int a;
int b;
if (size > 0)
{
for (a = 0; a < size; a++)
{
for (b = 0; b < size; b++)
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
