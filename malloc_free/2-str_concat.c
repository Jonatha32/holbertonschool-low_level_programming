#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: parameter
 * @s2: parameter
 * Return: NULL
 */
char *str_concat(char *s1, char *s2)
{
int a = 0;
int b = 0;
char *c;
int d = 0;
int e = 0;
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
c = malloc((a + b + 1) * sizeof(char));
if (c == NULL)
{
return (NULL);
}
while (d < a)
{
c[d] = s1[d];
d++;
}
while (e < b)
{
c[d] = s2[e];
d++;
e++;
}
c[d] = '\0';
return (c);
}
