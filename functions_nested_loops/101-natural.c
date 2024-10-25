#include <stdio.h>
#include "main.h"

/**
 * main - function
 * Return: 0
 */

int main(void)
{
	int d, a;

	for (d = 0; d < 1024; d++)
	{
		if (d % 3 == 0 || d % 5 == 0)
		{
			a += d;
		}
	}
	printf("%d\n", a);
	return (0);
}
