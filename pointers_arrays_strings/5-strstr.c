#include "main.h"
/**
 * _strstr - string
 * @haystack: parameter
 * @needle: parameter
 * Return: NULL
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack)
{
char *a = haystack;
char *b = needle;
while (*a && *b && (*a == *b))
{
a++;
b++;
}
if (*b == '\0')
{
return (haystack);
}
haystack++;
}
return ('\0');
}
