#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - initialize memory
 * @nmemb: parameter
 * @size: parameter
 * Return: NULL or b
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int a;
char *b;
unsigned int c = 0;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
a = nmemb * size;
b = malloc(a);
if (b == NULL)
{
return (NULL);
}
while (c < a)
{
b[c] = 0;
c++;
}
return (b);
}
