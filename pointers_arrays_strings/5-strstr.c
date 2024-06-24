#include "main.h"
/**
 * _strstr - string
 * @haystack: parameter
 * @needle: parameter
 * Return: NULL
 */
char *_strstr(char *haystack, char *needle)
{
unsigned char a;
unsigned char b = 0;
while (haystack[a] != '\0')
{
while (needle[b] != '\0')
{
if (a == b)
{
return (needle);
}
a++;
}
a++;
}
return ('\0');
}
