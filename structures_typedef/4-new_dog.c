#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * str_len2 - function
 * @str: parameter
 * Return: a
 */

int str_len2(char *str)
{
	int a = 0;

	while (str[a] != '\0')
		a++;
	return (a);
}

/**
 * str_copy - function
 * @src: parameter
 * Return: dest
 */

char *str_copy(char *src)
{
	int a = 0;
	char *dest;

	int l = str_len2(src);

	dest = malloc(l + 1);
	if (dest == NULL)
		return (NULL);

	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}

/**
 * new_dog - function
 * @name: parameter
 * @age: parameter
 * @owner: parameter
 * Return: new_dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *owner_copy, *name_copy;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	name_copy = str_copy(name);
	if (name_copy == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	owner_copy = str_copy(owner);
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(new_dog);
		return (NULL);
	}
	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = owner_copy;

	return (new_dog);

}
