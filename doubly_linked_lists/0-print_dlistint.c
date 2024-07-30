#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dlistint - print
 * @h: parameter
 * Return: a
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t a = 0;
while (h != NULL)
{
printf("%d\n", h->n);
a++;
h = h->next;
}
return (a);
}
