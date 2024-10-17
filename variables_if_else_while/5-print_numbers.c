#include <stdio.h>

/**
 * main - function
 * Return: 0
 */

int main(void)
{
	int a = 0;

	while (a <= 9)
	{
		putchar(a + '0');
		a++;
	}
	putchar(a);
	return (0);
}
