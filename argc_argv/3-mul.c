#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 * @argc: parameter
 * @argv: parameter
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a, b, c;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		c = a * b;
		printf("%d\n", c);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
