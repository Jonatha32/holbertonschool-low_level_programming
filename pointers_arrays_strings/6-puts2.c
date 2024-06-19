#include "main.h"
/**
 * puts2 - print
 * @str: parameter
 */
void puts2(char *str)
{
int a = 0;
while (str[a] != '\0')
{
if (a != 1 && a != 3 && a != 5 && a != 7 && a != 9)
{
_putchar(str[a]);
}
a++;
}
_putchar('\n');
}
