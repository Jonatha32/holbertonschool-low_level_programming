#include <stdlib.h>
#include <stdio.h>
#include "calc.h"

/**
 * main - function
 * @argc: parameter
 * @argv: parameter
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a, b, result;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	operation = get_op_func(argv[2]);

	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = operation(a, b);
	printf("%d\n", result);

	return (0);
}
