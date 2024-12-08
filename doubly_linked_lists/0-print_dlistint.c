#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dlistint - function
 * @h: parameter
 * Return: i
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
