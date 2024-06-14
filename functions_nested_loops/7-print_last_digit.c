#include "main.h"
/**
 * print_last_digit - print last digit
 * @a: parameter
 * Return: b
 */
int print_last_digit(int a)
{
int b;
b = a % 10;
while (b < 0)
{
b = b * -1;
}
_putchar(b + '0');
return (b);
}
