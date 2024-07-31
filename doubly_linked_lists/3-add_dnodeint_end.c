#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * add_dnodeint_end - add node
 * @head: parameter
 * @n: parameter
 * Return: a
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *a = malloc(sizeof(dlistint_t));
dlistint_t *b;
if (a == NULL)
return (NULL);
a->n = n;
a->next = NULL;
if (*head == NULL)
{
a->prev = NULL;
*head = a;
return (a);
}
b = *head;
while (b->next != NULL)
b = b->next;
b->next = a;
a->prev = b;
return (a);
}
