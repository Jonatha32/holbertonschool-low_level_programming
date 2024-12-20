#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - function
 * @h: parameter
 * Return: count
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
