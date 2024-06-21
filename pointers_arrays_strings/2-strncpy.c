#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int a = 0;
while (a < n && src[a] != '\0')
{
dest[a] = src[a];
a++;
}
return (dest);
}
