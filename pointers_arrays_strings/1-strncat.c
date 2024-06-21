#include "main.h"
/**
 * _strncat - concatenate string
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int a = 0;
int b = 0;
while (dest[a] != '\0')
{
a++;
}
while (b < n && src[b] != '\0')
{
dest[a + b] = src[b];
b++;
}
dest[a + b] = '\0';
return (dest);
}
