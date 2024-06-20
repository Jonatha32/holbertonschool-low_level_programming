#include "main.h"
/**
 * _strcat - concatenates string
 * @dest: parameter
 * @src: parameter
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
int a = 0;
int b = 0;
while (dest[a] != '\0')
{
a++;
}
while (src[b] != '\0')
{
dest[b + a] = src[b];
b++;
}
dest[b + a] = '\0';
return (dest);
}
