#include "main.h"
/**
 * _divide_ok - new divide
 * @a: parameter
 * @n: parameter
 * Return: 1 / 0
 */
int _divide_ok(int n, int a)
{
if (a * a > n)
{
return (1);
}
if (n % a  == 0)
{
return (0);
}
return (_divide_ok(n, a + 1));
}
/**
 * is_prime_number - prime number
 * @n: parameter
 * Return: 0 / 1
 */
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
if (n == 2)
{
return (1);
}
return (_divide_ok(n, 2));
}
