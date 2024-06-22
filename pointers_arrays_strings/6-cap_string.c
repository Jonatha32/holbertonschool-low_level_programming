#include "main.h"
/**
 * cap_string - string upper
 * @a: parameter
 * Return: a
 */
char *cap_string(char *a)
{
char *b = a;
int c = 1;
while (*b != '\0')
{
if (*b == ' ' || *b == '\t' || *b == '\n' || *b == ',' || *b == ';' ||
*b == '.' || *b == '!' || *b == '?' || *b == '"' || *b == '(' ||
*b == ')' || *b == '{' || *b == '}')
{
c = 1;
}
else if (c && *b >= 'a' && *b <= 'z')
{
*b = *b - 32;
c = 0;
}
else
{
c = 0;
}
b++;
}
return (a);
}
