#include<stdio.h>
#include "main.h"

/**
 * _isdigit - function
 * @c: parameter
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}