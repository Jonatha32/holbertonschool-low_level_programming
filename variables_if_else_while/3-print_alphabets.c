#include <stdio.h>

/**
 * main - function
 * Return: 0
 */

int main(void)
{
	char a = 'a', b = 'A';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	while (b <= 'Z')
	{
		putchar(b);
		b++;
	}
	putchar ('\n');
	return (0);
}
