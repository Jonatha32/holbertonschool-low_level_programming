#include <stdio.h>

/**
 * main - function
 * Return: 0
 */

int main(void)
{
	int a;
	char b = 'a';

	for (a = 0; a <= 9; a++)
	{
		putchar(a + '0');
	}
	while (b <= 'f')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
