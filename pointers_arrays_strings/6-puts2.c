#include "main.h"
/**
 * puts2 - print
 * @str: parameter
 */
void puts2(char *str)
{
int a = 0;
int b;
while (str[a] != '\0')
{
a++;
}
for (b = 0; b < a; b += 2)
{
_putchar(str[b]);
}
_putchar('\n');
}
