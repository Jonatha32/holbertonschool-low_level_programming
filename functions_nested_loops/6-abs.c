#include <stdio.h>
#include "main.h"

/**
 * _abs - function
 * @n: parameter
 * Return: n
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = (-1) * n;
	}
	return (n);
}
