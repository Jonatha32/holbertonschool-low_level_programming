#include "main.h"
/**
 * puts_half - puts string
 * @str: parameter
 */
void puts_half(char *str)
{
int a = 0;
int b;
while (str[a] != '\0')
{
a++;
}
for (b = 5; b <= a; b++)
{
_putchar(str[b]);
}
_putchar('\n');
}
