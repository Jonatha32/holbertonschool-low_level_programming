#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - function
 * @argc: parameter
 * @argv: parameter
 * Return: 98 / 99 / 100 / 0
 */
int main(int argc, char *argv[])
{
int a, b, c;
int (*ope)(int, int);
if (argc != 4)
{
printf("Error\n");
return (98);
}
a = atoi(argv[1]);
b = atoi(argv[3]);
ope = get_op_func(argv[2]);
if (ope == NULL)
{
printf("Error\n");
return (99);
}
if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
{
printf("Error\n");
return (100);
}
c = ope(a, b);
printf("%d\n", c);
return (0);
}
