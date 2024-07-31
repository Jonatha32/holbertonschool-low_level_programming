#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * insert_dnodeint_at_index - insert node
 * @h: parameter
 * @idx: parameter
 * @n: parameter
 * Return: b
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *a = *h;
dlistint_t *b;
unsigned int c = 0;
if (idx == 0)
{
return (add_dnodeint(h, n));
}
while (a != NULL && c < idx - 1)
{
a = a->next;
c++;
}
if (a == NULL)
{
return (NULL);
}
b = malloc(sizeof(dlistint_t));
if (b == NULL)
{
return (NULL);
}
b->n = n;
b->next = a->next;
b->prev = a;
if (a->next != NULL)
{
a->next->prev = b;
}
a->next = b;
return (b);
}
