#include "main.h"
/**
 * _strspn - length substring
 * @s: parameter
 * @accept: parameter
 * Return: a
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int a = 0;
int b;

while (*s)
{
for (b = 0; accept[b]; b++)
{
if (*s == accept[b])
break;
}
if (*s != accept[b])
break;
a++;
s++;
}
return (a);
}
