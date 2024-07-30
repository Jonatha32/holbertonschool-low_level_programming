#include "lists.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - add node end
 * @head: parameter
 * @str: parameter
 * Return: a
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *a, *b;
int c = 0;
a = malloc(sizeof(list_t));
if (a == NULL)
return (NULL);
a->str = strdup(str);
if (a->str == NULL)
{
free(a);
return (NULL);
}
while (str[c])
c++;
a->len = c;
a->next = NULL;
if (*head == NULL)
{
*head = a;
}
else
{
b = *head;
while (b->next != NULL)
b = b->next;
b->next = a;
}
return (a);
}
