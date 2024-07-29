#include "lists.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
/**
 * add_node - add node
 * @head: parameter
 * @str: parameter
 * Return: Null or a
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *a;
int b = 0;
a = malloc(sizeof(list_t));
if (a == NULL)
{
return (NULL);
}
a->str = strdup(str);
if (a->str == NULL)
{
free(a);
return (NULL);
}
while (str[b])
{
b++;
}
a->len = b;
a->next = *head;
*head = a;
return (a);
}
