#include "main.h"
/**
 * _sqrt_oki - new function
 * @n: parameter
 * @a: parameter
 * Return: n / a
 */
int _sqrt_oki(int n, int a)
{
if (a * a == n)
{
return (a);
}
if (a * a > n)
{
return (-1);
}
return (_sqrt_oki(n, a + 1));
}
/**
 * _sqrt_recursion - main function
 * @n: parameter
 * Return: -1
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0 || n == 1)
{
return (n);
}
return (_sqrt_oki(n, 1));
}
