#include "main.h"
/**
 * print_diagonal - print diagonal
 * @n: parameter
 */
void print_diagonal(int n)
{
int a;
int b;
if (n > 0)
{
for (a = 0; a < n; a++)
{
for (b = 0; b < a; b++)
{
_putchar(' ');
}
_putchar(92);
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
