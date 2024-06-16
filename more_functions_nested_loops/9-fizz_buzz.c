#include "main.h"
#include <stdio.h>
/**
 * main - void
 * Return: 0 Always Success
 */
int main(void)
{
int a;
for (a = 1; a <= 100; a++)
{
if (a % 3 == 0 && a % 5 == 0)
{
printf("FizzBuzz ");
}
else if (a % 5 == 0)
{
printf("Buzz ");
}
else if (a % 3 == 0)
{
printf("Fizz ");
}
else
{
printf("%d ", a);
}
}
printf("\n");
return (0);
}
