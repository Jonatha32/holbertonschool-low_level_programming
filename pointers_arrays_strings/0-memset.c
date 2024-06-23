#include "main.h"
/**
 * _memset - fills memory
 * @s: parameter
 * @b: parameter
 * @n: parameter
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;
for (a = 0; a < n; a++)
{
s[a] = b;
}
return (s);
}
