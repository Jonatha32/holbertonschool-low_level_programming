#include "main.h"
/**
 * _strcpy - copy
 * @dest: pointer
 * @src: pointer
 * Return: b
 */
char *_strcpy(char *dest, char *src)
{
char *b = dest;
while ((*dest++ = *src++))
;
return (b);
}
