#include <stdio.h>
#include "dog.h"
#include "main.h"

/**
 * init_dog - function
 * @d: parameter
 * @name: parameter
 * @age: parameter
 * @owner: parameter
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
}
