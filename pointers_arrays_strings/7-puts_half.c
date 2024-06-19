#include "main.h"
/**
 * puts_half - puts string
 * @str: parameter
 */
void puts_half(char *str)
{
int a = 5;
while (str[a] != '\0')
{
if (a <= 9)
{
_putchar(str[a]);
}
a++;
}
_putchar('\n');
}
