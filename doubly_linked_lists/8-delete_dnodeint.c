#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - delete node
 * @head: parameter
 * @index: parameter
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *a = *head;
unsigned int b = 0;
if (*head == NULL)
{
return (-1);
}
if (index == 0)
{
*head = a->next;
if (*head != NULL)
{
(*head)->prev = NULL;
}
free(a);
return (1);
}
while (a != NULL && b < index)
a = a->next;
b++;
if (a == NULL)
{
return (-1);
}
if (a->prev != NULL)
a->prev->next = a->next;
if (a->next != NULL)
a->next->prev = a->prev;
free(a);
return (1);
}
