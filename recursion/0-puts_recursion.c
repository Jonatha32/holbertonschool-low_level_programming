#include "main.h"
/**
 * _puts_recursion - puts_recursion
 * @s: parameter
0;136;0c */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
return;
}
_puts_recursion(s + 1);
}
