#include "main.h"
/**
 * _strlen - count characters
 * @s: parameter
 * Return: a
 */
int _strlen(char *s)
{
int a = 0;
while (s[a] != '\0')
{
a++;
}
return (a);
}
