#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * dlistint_len - len
 * @h: parameter
 * Return: a
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t a = 0;
while (h != NULL)
{
a++;
h = h->next;
}
return (a);
}
