#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_list - print list
 * @h: parameter
 * Return: a
 */
size_t print_list(const list_t *h)
{
int a = 0;
while (h != NULL)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", h->len, h->str);
h = h->next;
a++;
}
return (a);
}
