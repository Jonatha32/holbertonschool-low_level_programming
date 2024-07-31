#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * free_dlistint - free list
 * @head: parameter
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *a;
while (head != NULL)
{
a = head;
head = head->next;
free(a);
}
}
