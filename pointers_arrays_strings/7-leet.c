#include "main.h"
/**
 * leet - encodes a string
 * @a: parameter
 * Return: a
 */
char *leet(char *a)
{
char *b = a;
char c[] = "aAeEoOtTlL";
char d[] = "4433007711";
int e;
while (*b != '\0')
{
for (e = 0; e < 10; e++)
{
if (*b == c[e])
{
*b = d[e];
}
}
b++;
}
return (a);
}
