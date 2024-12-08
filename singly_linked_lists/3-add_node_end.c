#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * _strlen - function
 * @str: parameter
 * Return: a
 */

int _strlen(const char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}

/**
 * add_node_end - function
 * @head: parameter
 * @str: parameter
 * Return: new_node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *c;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = _strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	c = *head;
	while (c->next != NULL)
		c = c->next;
	c->next = new_node;
	return (new_node);
}
