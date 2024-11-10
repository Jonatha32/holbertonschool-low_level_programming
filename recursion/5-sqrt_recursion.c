#include <stdio.h>
#include "main.h"

/**
 * _sqrt_help - function
 * @a: parameter
 * @b: parameter
 * Return: a or -1
 */

int _sqrt_help(int a, int b)
{
	if (a * a == b)
	{
		return (a);
	}
	else if (a * a > b)
	{
		return (-1);
	}
		return (_sqrt_help(a + 1, b));
}

/**
 * _sqrt_recursion - function
 * @n: parameter
 * Return: -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	return (_sqrt_help(1, n));
}
