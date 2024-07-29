#include "lists.h"
#include <stddef.h>
/**
 * list_len - list len
 * @h: parameter
 * Return: a
 */
size_t list_len(const list_t *h)
{
int a = 0;
while (h != NULL)
{
a++;
h = h->next;
}
return (a);
}
