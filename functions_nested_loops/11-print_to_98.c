#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - function
 * @n: parameter
 */

void print_to_98(int n)
{
	int a = n;

	if (n <= 98)
	{
		while (a <= 98)
		{
			if (a == 98)
			{
			printf("%d", a);
			}
			else if (a != 98)
			{
				printf("%d, ", a);
			}
			a++;
		}
		printf("\n");
	}
}
