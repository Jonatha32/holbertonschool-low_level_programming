#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * get_dnodeint_at_index - get node
 * @head: parameter
 * @index: parameter
 * Return: a or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *a = head;
unsigned int b = 0;
while (a != NULL && b < index)
{
a = a->next;
b++;
}
if (a == NULL)
return (NULL);
else
return (a);
}
