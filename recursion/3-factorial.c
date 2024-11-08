#include <stdio.h>
#include "main.h"

/**
 * factorial - function
 * @n: parameter
 * Return: lol
 */

int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else if (n == 0)
		return (1);
	else if (n < 0)
	{
		return (-1);
	}
	return (0);
}
