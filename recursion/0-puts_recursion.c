#include "main.h"
/**
 * _puts_recursion - puts_recursion
 * @s: parameter
*/
void _puts_recursion(char *s)
{
if (s[0] != '\0')
{
_puts_recursion(s + 1);
}
}
