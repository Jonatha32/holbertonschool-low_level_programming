#ifndef DOGGY
#define DOGGY

/**
 * struct dog - dog
 * @name: parameter
 * @age: parameter
 * @owner: parameter
 */

struct dog
{
char *name;
float age;
char *owner;
};

typedef struct dog dog_8;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
