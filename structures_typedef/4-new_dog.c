#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * new_dog - create a new dog
 * @name: parameter
 * @age: parameter
 * @owner: parameter
 * Return: NULL or a
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *a;
char *b;
char *c;
int d;
int e = 0;
int f = 0;
a = malloc(sizeof(dog_t));
if (a == NULL)
return (NULL);
while (name[e] != '\0')
e++;
while (owner[f] != '\0')
{
f++;
}
b = malloc(e + 1);
if (b == NULL)
{
free(a);
return (NULL);
}
c = malloc(f + 1);
if (c == NULL)
{
free(b);
free(a);
return (NULL);
}
for (d = 0; d <= e; d++)
{
b[d] = name[d];
}
for (d = 0; d <= f; d++)
{
c[d] = owner[d];
}
a->name = b;
a->age = age;
a->owner = c;
return (a);
}
