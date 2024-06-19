#include "main.h"
#include <stdio.h>
/**
 * print_array - print array
 * @a: parameter
 * @n: parameter
 */
void print_array(int *a, int n)
{
for (n = 0; n < 5; n++)
{
if (n < 4)
{
printf("%d, ", n[a]);
}
else
{
printf("%d", n[a]);
}
}
printf("\n");
}
