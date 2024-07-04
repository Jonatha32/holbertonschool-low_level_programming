#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - string
 * @s1: parameter
 * @s2: parameter
 * @n: parameter
 * Return: NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int a = 0;
unsigned int b = 0;
char *c;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[a] != '\0')
{
a++;
}
while (s2[b] != '\0')
{
b++;
}
if (n >= b)
{
n = b;
}
c = malloc(a + n + 1);
if (c == NULL)
{
return (NULL);
}
for (unsigned int d = 0; d < a; d++)
{
c[d] = s1[d];
}
for (unsigned int e = 0; e < n; e++)
{
c[d] = s2[e];
d++;
}
c[d] = '\0';
return (c);
}
