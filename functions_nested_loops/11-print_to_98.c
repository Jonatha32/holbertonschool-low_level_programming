#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - function
 * @n: parameter
 */

void print_to_98(int n)
{
	int a = n, b = n;

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
	else if (n >= 98)
	{
		while (b >= 98)
		{
			if (b == 98)
			{
				printf("%d", b);
			}
			else if (b != 98)
			{
				printf("%d, ", b);
			}
			b--;
		}
		printf("\n");
	}
}
