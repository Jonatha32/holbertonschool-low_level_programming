#include "main.h"
/**
 * _strpbrk - string
 * @s: parameter
 * @accept: parameter
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{
int a;
while (*s)
{
for (a = 0; accept[a]; a++)
{
if (*s == accept[a])
return (s);
}
s++;
}
return ('\0');
}
