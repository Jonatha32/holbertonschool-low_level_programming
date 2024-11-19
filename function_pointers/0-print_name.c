#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function
 * @name: parameter
 * @f: function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f != NULL)
	{
		f(name);
	}
}
