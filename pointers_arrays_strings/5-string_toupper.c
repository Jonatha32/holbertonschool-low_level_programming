#include "main.h"
/**
 * string_toupper - change to upper
 * @b: parameter
 * Return: b
 */
char *string_toupper(char *b)
{
char *a = b;
while (*a != '\0')
{
if (*a >= 'a' && *a <= 'z')
{
*a = *a - 32;
}
a++;
}
return (b);
}
