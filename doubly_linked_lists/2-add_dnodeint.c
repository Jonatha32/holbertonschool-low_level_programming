#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * add_dnodeint - add node
 * @head: parameter
 * @n: parameter
 * Return: NULL or a
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *a;
a = malloc(sizeof(dlistint_t));
if (a == NULL)
return (NULL);
a->n = n;
a->prev = NULL;
a->next = *head;
if (*head != NULL)
(*head)->prev = a;
*head = a;
return (a);
}
