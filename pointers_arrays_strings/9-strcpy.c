#include "main.h"
/**
 * _strcpy - copy
 * @dest: pointer
 * @src: pointer
 * Return: b
 */
char *_strcpy(char *dest, char *src)
{
int a;
char *b = dest;
while (src[a] != '\0')
{
*dest = src[a];
dest++;
a++;
}
*dest = '\0';
return (b);
}
