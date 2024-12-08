#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - function
 * @head: parameter
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
