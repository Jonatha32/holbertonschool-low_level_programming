#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * free_list - free list
 * @head: parameter
 */
void free_list(list_t *head)
{
list_t *a;
while (head != NULL)
{
a = head;
head = head->next;
free(a->str);
free(a);
}
}
