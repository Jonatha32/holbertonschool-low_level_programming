#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @agrc: parameter
 * @argv: parameter
 * Return: 0 / 1
 */
int main(int agrc, char *argv[])
{
int a = 0;
int b = 0;
if (agrc == 3)
{
a = atoi(argv[1]);
b = atoi(argv[2]);
printf("%d\n", a * b);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
