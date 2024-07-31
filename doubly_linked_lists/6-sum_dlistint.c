#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * sum_dlistint - sum list
 * @head: parameter
 * Return: a
 */
int sum_dlistint(dlistint_t *head)
{
int a = 0;
dlistint_t *b = head;
while (b != NULL)
{
a += b->n;
b = b->next;
}
return (a);
}
