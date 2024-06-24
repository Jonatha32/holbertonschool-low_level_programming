#include "main.h"
/**
 * _strstr - string
 * @haystack: parameter
 * @needle: parameter
 * Return: NULL
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
{
while (*needle != '\0')
{
if (*haystack == *needle)
{
return (haystack);
}
haystack++;
}
haystack++;
}
return ('\0');
}
