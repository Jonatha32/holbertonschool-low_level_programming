#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - function
 * @s: parameter
 * Return: 0 or idk
 */

int _strlen_recursion(char *s)
{

	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
