#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - duplicate
 * @str: parameter
 * Return: b or NULL
 */
char *_strdup(char *str)
{
unsigned int a = 0;
char *b;
unsigned int c = 0;
if (str == NULL)
{
return (NULL);
}
while (str[a] != '\0')
{
a++;
}
b = malloc((a + 1) * sizeof(char));
if (b == NULL)
{
return (NULL);
}
while (c <= a)
{
b[c] = str[c];
c++;
}
return (b);
}
