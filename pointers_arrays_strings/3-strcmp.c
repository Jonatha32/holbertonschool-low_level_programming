#include "main.h"
/**
 * _strcmp - compare string
 * @s1: parameter
 * @s2: parameter
 * Return: s1[a]
 */
int _strcmp(char *s1, char *s2)
{
int a = 0;
while (s1[a] != '\0' && s2[a] != '\0')
{
if (s1[a] != s2[a])
{
return (s1[a] - s2[a]);
}
a++;
}
return (s1[a] - s2[a]);
}
