#include "main.h"
#include <stddef.h>
/**
 * _strchr - string character
 * @s: parameter
 * @c: parameter
 * Return: s / NULL
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
return(NULL);
}
