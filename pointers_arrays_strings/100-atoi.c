#include "main.h"
/**
 * _atoi - string to a int
 * @s: parameter
 * Return: b
 */
int _atoi(char *s)
{
unsigned int a = 0;
int b = 1;
int c = 0;
int d = 0;
while (s[c] != '\0')
{
if (s[c] == '-')
{
b *= -1;
}
else if (s[c] >= '0' && s[c] <= '9')
{
a = a * 10 + (s[c] - '0');
d = 1;
}
else if (d)
{
break;
}
c++;
}
return (a *b);
}
